#include <QtGui>
#include "zigbee.h"
#define TIP1 "The humidity is too hign!"
#define TIP2 "The humidity is too low!"
#define TIP3 "The temperature is too hign!"
#define TIP4 "The temperature is too low!"
#define TIP5 "There is combustible gas in the environment!"
#define TIP6 "Warning:There may be a thief!"

//构造函数
ZigBee::ZigBee(DataBase *db,Gprs *grs){
ITIME=100;
count=0;

temAndHumCount=0;
peopleCount=0;
smokeCount=0;
firstOpenSmoke=true;
firstOpenPeople=true;
firstOpenHAT=true;
sendTemWarning=true;
sendHumWarning=true;
sendSmokeWarning=true;
sendPeopleWarning=true;
isSafeSettingOpen=false;

database = db;
gprs=grs;
initZigBee();

connect(this,SIGNAL(signal_insert(ZIGBEE_INFO)),database,SLOT(slot_insert(ZIGBEE_INFO)));
connect(this,SIGNAL(signal_query(QString,QString)),database,SLOT(slot_query(QString,QString)));
}

//析构函数
ZigBee::~ZigBee()
{
}

//初始化系统
void ZigBee::initZigBee()
{	
    //打开和设置端口
    myCom = new Posix_QextSerialPort("/dev/ttySAC2",QextSerialBase::Polling);

    if(!myCom->open(QIODevice::ReadWrite)){
     QMessageBox::warning(0, tr("Warning:"),
				tr("Open port error!"));
       return; 
    }
    //设置波特率115200
    myCom->setBaudRate((BaudRateType)19);
    //设置数据位8
    myCom->setDataBits((DataBitsType)3);
    //设置奇偶校验位N
    myCom->setParity((ParityType)0);
    //设置停止位1
    myCom->setStopBits((StopBitsType)0);
    //设置数据流控制“无”
    myCom->setFlowControl(FLOW_OFF);
    //设置读写超时（毫秒级）
    myCom->setTimeout(10);
    //给buff清零
    buff.clear();

userListCL=new UserListCL();

    //设置定时器
	timer = new QTimer;
        timer->start(ITIME);
	connect( timer, SIGNAL(timeout()), this, SLOT(timeout_slot()) );
}

//读取串口消息并分析
void ZigBee::readMsg(QString msg){
QStringList strl = msg.split("\n");
for(int i=0;i<strl.count();i++){
QString str=static_cast<QString>(strl.at(i));

zigbee_info.netFlag=str.mid(4,2);    //网络标识
zigbee_info.pointAddr=str.mid(6,8);  //节点地址
zigbee_info.rootAddr=str.mid(14,8);   //根节点地址
zigbee_info.pointState=str.mid(22,2); //节点状态
zigbee_info.pointWay=str.mid(24,2);   //节点通道
zigbee_info.port=str.mid(26,2);       //通信端口
zigbee_info.sensorNum=str.mid(28,2);  //传感器类型编号
zigbee_info.sensorID=str.mid(30,2);   //相同类型传感器ID
zigbee_info.commandNum=str.mid(32,2); //节点命令序号
zigbee_info.pointData=str.mid(34,12);  //节点数据

temAndHumCount++;
peopleCount++;
smokeCount++;

if(temAndHumCount>20){
emit(signal_thNotWork());
}

if(peopleCount>20){
emit(signal_plNotWork());
}

if(smokeCount>20){
emit(signal_skNotWork());
}

bool ok;

switch(zigbee_info.sensorNum.toInt(&ok,16)){

case 7://人体检测传感器
{

if(firstOpenPeople){
setPreZigBeeInfo(zigbee_info,0);
firstOpenPeople=false;
}

peopleCount=0;
if(zigbee_info.pointData.mid(10,2).compare("01")==0){
   emit(signal_people());
if(isSafeSettingOpen){
if(sendPeopleWarning){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP6);
}
sendPeopleWarning=false;
}
}
}
else{
   emit(signal_nopeople());
   sendPeopleWarning=true;
}
if(pre_people_info.netFlag.compare(zigbee_info.netFlag)!=0||
pre_people_info.pointAddr.compare(zigbee_info.pointAddr)!=0||
pre_people_info.rootAddr.compare(zigbee_info.rootAddr)!=0||
pre_people_info.pointState.compare(zigbee_info.pointState)!=0||
pre_people_info.pointWay.compare(zigbee_info.pointWay)!=0||
pre_people_info.port.compare(zigbee_info.port)!=0||
pre_people_info.sensorNum.compare(zigbee_info.sensorNum)!=0||
pre_people_info.sensorID.compare(zigbee_info.sensorID)!=0||
pre_people_info.commandNum.compare(zigbee_info.commandNum)!=0||
pre_people_info.pointData.compare(zigbee_info.pointData)!=0){
emit(signal_insert(zigbee_info));
setPreZigBeeInfo(zigbee_info,0);
}
	break;
}

case 10://温湿度传感器
{

if(firstOpenHAT){
setPreZigBeeInfo(zigbee_info,1);
firstOpenHAT=false;
}

temAndHumCount=0;
int HH=zigbee_info.pointData.mid(4,2).toInt(&ok,16);
int HL=zigbee_info.pointData.mid(6,2).toInt(&ok,16);
int TH=zigbee_info.pointData.mid(8,2).toInt(&ok,16);
int TL=zigbee_info.pointData.mid(10,2).toInt(&ok,16);
double hum = (HH*256+HL)/10.0; //湿度，以%为单位
double tem = (TH*256+TL)/10.0; //温度，以°C为单位

emit(signal_hum(hum));
emit(signal_tem(tem));

if(hum>65){
if(sendHumWarning){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP1);
}
sendHumWarning=false;
}
}
else if(hum<30){
if(sendHumWarning){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP2);
}
sendHumWarning=false;
}
}
else{
sendHumWarning=true;
}

if(tem>38){
if(sendTemWarning){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP3);
}
sendTemWarning=false;
}
}
else if(tem<0){
if(sendTemWarning){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP4);
}
sendTemWarning=false;
}
}
else{
sendTemWarning=true;
}
if(pre_hat_info.netFlag.compare(zigbee_info.netFlag)!=0||
pre_hat_info.pointAddr.compare(zigbee_info.pointAddr)!=0||
pre_hat_info.rootAddr.compare(zigbee_info.rootAddr)!=0||
pre_hat_info.pointState.compare(zigbee_info.pointState)!=0||
pre_hat_info.pointWay.compare(zigbee_info.pointWay)!=0||
pre_hat_info.port.compare(zigbee_info.port)!=0||
pre_hat_info.sensorNum.compare(zigbee_info.sensorNum)!=0||
pre_hat_info.sensorID.compare(zigbee_info.sensorID)!=0||
pre_hat_info.commandNum.compare(zigbee_info.commandNum)!=0||
pre_hat_info.pointData.compare(zigbee_info.pointData)!=0){
emit(signal_insert(zigbee_info));
setPreZigBeeInfo(zigbee_info,1);
}
	break;
}

case 11://烟雾传感器
{

if(firstOpenSmoke){
setPreZigBeeInfo(zigbee_info,2);
firstOpenSmoke=false;
}

smokeCount=0;
if(zigbee_info.pointData.mid(10,2).compare("01")==0){
     emit(signal_smoke());
     if(sendSmokeWarning){
     /*QStringList uL=userListCL->ruRead();
       for (int i = 0; i < uL.count(); i++) {
       QString number = static_cast<QString>(uL.at(i));
       gprs->sendMsg(number,TIP5);
     }*/
     sendSmokeWarning=false;
}
}
else{
     sendSmokeWarning=true;
     emit(signal_nosmoke());
}
if(pre_smoke_info.netFlag.compare(zigbee_info.netFlag)!=0||
pre_smoke_info.pointAddr.compare(zigbee_info.pointAddr)!=0||
pre_smoke_info.rootAddr.compare(zigbee_info.rootAddr)!=0||
pre_smoke_info.pointState.compare(zigbee_info.pointState)!=0||
pre_smoke_info.pointWay.compare(zigbee_info.pointWay)!=0||
pre_smoke_info.port.compare(zigbee_info.port)!=0||
pre_smoke_info.sensorNum.compare(zigbee_info.sensorNum)!=0||
pre_smoke_info.sensorID.compare(zigbee_info.sensorID)!=0||
pre_smoke_info.commandNum.compare(zigbee_info.commandNum)!=0||
pre_smoke_info.pointData.compare(zigbee_info.pointData)!=0){
emit(signal_insert(zigbee_info));
setPreZigBeeInfo(zigbee_info,2);
}
	break;
}
}
//emit(hasGotInfo());
}
}

//定时器触发（从串口读取数据）
void ZigBee::timeout_slot()
{
      buff = myCom->readAll();
          
      if(!buff.isEmpty()&&buff.length()==26){
         qDebug()<<QString(buff.toHex().data());
	 readMsg(QString(buff.toHex().data()));
         buff.clear();//给buff清零
       }	
}


//得到ZigBee信息
ZIGBEE_INFO ZigBee::getZigBeeInfo(){
return zigbee_info;
}

//得到ZigBee信息
void ZigBee::setPreZigBeeInfo(ZIGBEE_INFO info,int id){
switch(id){
case 0:
pre_people_info.netFlag=info.netFlag;
pre_people_info.pointAddr=info.pointAddr;
pre_people_info.rootAddr=info.rootAddr;
pre_people_info.pointState=info.pointState;
pre_people_info.pointWay=info.pointWay;
pre_people_info.port=info.port;
pre_people_info.sensorNum=info.sensorNum;
pre_people_info.sensorID=info.sensorID;
pre_people_info.commandNum=info.commandNum;
pre_people_info.pointData=info.pointData;
break;
case 1:
pre_hat_info.netFlag=info.netFlag;
pre_hat_info.pointAddr=info.pointAddr;
pre_hat_info.rootAddr=info.rootAddr;
pre_hat_info.pointState=info.pointState;
pre_hat_info.pointWay=info.pointWay;
pre_hat_info.port=info.port;
pre_hat_info.sensorNum=info.sensorNum;
pre_hat_info.sensorID=info.sensorID;
pre_hat_info.commandNum=info.commandNum;
pre_hat_info.pointData=info.pointData;
break;
case 2:
pre_smoke_info.netFlag=info.netFlag;
pre_smoke_info.pointAddr=info.pointAddr;
pre_smoke_info.rootAddr=info.rootAddr;
pre_smoke_info.pointState=info.pointState;
pre_smoke_info.pointWay=info.pointWay;
pre_smoke_info.port=info.port;
pre_smoke_info.sensorNum=info.sensorNum;
pre_smoke_info.sensorID=info.sensorID;
pre_smoke_info.commandNum=info.commandNum;
pre_smoke_info.pointData=info.pointData;
break;
}
}

//设置防盗设置开关
void ZigBee::setSafeSetting(bool flag){
isSafeSettingOpen=flag;
}


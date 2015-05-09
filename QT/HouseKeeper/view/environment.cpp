#include "environment.h"

//构造函数
Environment::Environment(QWidget *parent,DataBase *db,ZigBee *zb) : QWidget(parent)
{
    database=db;
    zigBee=zb;
    setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
Environment::~Environment()
{    
}

//初始化
void Environment::init(){
    setupUi(this);

background.load("images/main.jpg");
//tabBg.load("images/submain50.png");

    QPalette palette1;
    palette1.setBrush(tabWidget->backgroundRole(), QBrush(background));
    tabWidget->setPalette(palette1);

    QPalette palette2;
    palette2.setBrush(tal->backgroundRole(), QBrush(background));
    tal->setPalette(palette2);

    QPalette palette3;
    palette3.setBrush(tal1->backgroundRole(), QBrush(background));
    tal1->setPalette(palette3);

    QPalette palette4;
    palette4.setBrush(tal2->backgroundRole(), QBrush(background));
    tal2->setPalette(palette4);

    
    qwtPlot = new CpuPlot(groupBox);
    qwtPlot->setGeometry(QRect(20, 40, 341, 191));

    qwtPlot->hide();
    temAHumTable->hide();
    label_5->hide();
    label_6->hide();

    initArray();
    initTable();
    sensorId="01";

    //按钮点击事件和相应的槽函数
    connect(valueButton,SIGNAL(clicked()),this,SLOT(slot_showHumiture()));
    connect(curveButton,SIGNAL(clicked()),this,SLOT(slot_showGraph()));
    connect(tableButton,SIGNAL(clicked()),this,SLOT(slot_showTable()));
    connect(exitButton1,SIGNAL(clicked()),this,SLOT(close()));
    connect(exitButton2,SIGNAL(clicked()),this,SLOT(close()));
    connect(exitButton3,SIGNAL(clicked()),this,SLOT(close()));

    //zigbee串口读到数据信号和相应的槽函数
    //connect(zigBee,SIGNAL(hasGotInfo()),this,SLOT(slot_showSensorInfo()));
connect(zigBee,SIGNAL(signal_people()),this,SLOT(slot_people()));
connect(zigBee,SIGNAL(signal_nopeople()),this,SLOT(slot_nopeople()));
connect(zigBee,SIGNAL(signal_smoke()),this,SLOT(slot_smoke()));
connect(zigBee,SIGNAL(signal_nosmoke()),this,SLOT(slot_nosmoke()));
connect(zigBee,SIGNAL(signal_hum(double)),this,SLOT(slot_hum(double)));
connect(zigBee,SIGNAL(signal_tem(double)),this,SLOT(slot_tem(double)));

connect(zigBee,SIGNAL(signal_thNotWork()),this,SLOT(slot_thNotWork()));
connect(zigBee,SIGNAL(signal_plNotWork()),this,SLOT(slot_plNotWork()));
connect(zigBee,SIGNAL(signal_skNotWork()),this,SLOT(slot_skNotWork()));

    //humid->setValue(34);
    //thermo->setValue(45);

    timer = new QTimer;
    timer->start(500);
    connect( timer, SIGNAL(timeout()), this, SLOT(timeout_slot()));
    this->show();
}

//初始化数组
void Environment::initArray(){
qheader[0]="Time";    
qheader[1]="netFlag";
qheader[2]="pointAddr";
qheader[3]="rootAddr";
qheader[4]="pointState";
qheader[5]="pointWay"; 
qheader[6]="port";  
qheader[7]="sensorNum";
qheader[8]="sensorID"; 
qheader[9]="commandNum"; 
qheader[10]="result";   
qheader[11]="tem";   
qheader[12]="hum";

sensorNum[0]="0b";
sensorNum[1]="0a";
sensorNum[2]="07";
}

//初始化表格
void Environment::initTable(){
QStringList header1;
QStringList header2;

smokeTable->setRowCount(20);     //设置行数为32  
smokeTable->setColumnCount(11);   //设置列数为11  
peopleTable->setRowCount(20);     //设置行数为32  
peopleTable->setColumnCount(11);   //设置列数为11 
 
header1<<qheader[0]<<qheader[1]<<qheader[2]<<qheader[3]<<qheader[4]<<qheader[5]<<qheader[6]<<qheader[7]<<qheader[8]<<qheader[9]<<qheader[10];    
smokeTable->setHorizontalHeaderLabels(header1);//设置表头
peopleTable->setHorizontalHeaderLabels(header1);//设置表头

temAHumTable->setRowCount(20);     //设置行数为32  
temAHumTable->setColumnCount(12);   //设置列数为12  
header2<<qheader[0]<<qheader[1]<<qheader[2]<<qheader[3]<<qheader[4]<<qheader[5]<<qheader[6]<<qheader[7]<<qheader[8]<<qheader[9]<<qheader[11]<<qheader[12];
temAHumTable->setHorizontalHeaderLabels(header2);    
}

//显示实时温湿度值
void Environment::slot_showHumiture(){
    thermo->show();
    humid->show();
    label->show();
    label_2->show();

    qwtPlot->hide();
    label_5->hide();

    temAHumTable->hide();
    label_6->hide();
}

//显示温湿度实时曲线图
void Environment::slot_showGraph(){
    qwtPlot->show();
    label_5->show();

    thermo->hide();
    humid->hide();
    label->hide();
    label_2->hide();

    temAHumTable->hide();
    label_6->hide();
}

//显示温湿度表格
void Environment::slot_showTable(){
    temAHumTable->show();
    label_6->show();

    qwtPlot->hide();
    label_5->hide();

    thermo->hide();
    humid->hide();
    label->hide();
    label_2->hide();
}

//更新时间
void Environment::slot_updateTime(){
    clock1->setTime(QTime::currentTime());
    clock2->setTime(QTime::currentTime());
    clock3->setTime(QTime::currentTime());
}

void slot_people();
        void slot_nopeople();
        void slot_smoke();
        void slot_nosmoke();
	void slot_hum(double);
	void slot_tem(double);

//有人
void Environment::slot_people()
{
 peoLabel->setText("people!");
}

//无人
void Environment::slot_nopeople()
{
peoLabel->setText("no people!");
}

//有烟雾
void Environment::slot_smoke()
{
smoLabel->setText("smoke!");
}

//无烟雾
void Environment::slot_nosmoke()
{
smoLabel->setText("no smoke!");
}

//温度
void Environment::slot_tem(double tem)
{
thermo->setValue(tem);
qwtPlot->setTemp(tem);
}

//湿度
void Environment::slot_hum(double hum)
{
humid->setValue(hum);
qwtPlot->setHum(hum);
}

//温湿度传感器停止工作
void Environment::slot_thNotWork(){
thermo->setValue(0);
qwtPlot->setTemp(0);
humid->setValue(0);
qwtPlot->setHum(0);
}

//人体检测传感器停止工作
void Environment::slot_plNotWork(){
peoLabel->setText("not work!");
}

//烟雾传感器停止工作
void Environment::slot_skNotWork(){
smoLabel->setText("not work!");
}

//定时器触发（显示相应信息表格）
void Environment::timeout_slot()
{
int i;
switch(tabWidget->currentIndex()){
case 0:{
QStringList result=database->slot_query(sensorNum[1],sensorId);

for(i=0;i<result.length();i++){
temAHumTable->setItem(i,0,new QTableWidgetItem(result.at(i).mid(0,24))); 
temAHumTable->setItem(i,1,new QTableWidgetItem(result.at(i).mid(24,2)));
temAHumTable->setItem(i,2,new QTableWidgetItem(result.at(i).mid(26,8)));
temAHumTable->setItem(i,3,new QTableWidgetItem(result.at(i).mid(34,8)));
temAHumTable->setItem(i,4,new QTableWidgetItem(result.at(i).mid(42,2)));
temAHumTable->setItem(i,5,new QTableWidgetItem(result.at(i).mid(44,2)));
temAHumTable->setItem(i,6,new QTableWidgetItem(result.at(i).mid(46,2)));
temAHumTable->setItem(i,7,new QTableWidgetItem(result.at(i).mid(48,2)));
temAHumTable->setItem(i,8,new QTableWidgetItem(result.at(i).mid(50,2)));
temAHumTable->setItem(i,9,new QTableWidgetItem(result.at(i).mid(52,2)));

bool ok;

int HH=result.at(i).mid(54,12).mid(4,2).toInt(&ok,16);
int HL=result.at(i).mid(54,12).mid(6,2).toInt(&ok,16);
int TH=result.at(i).mid(54,12).mid(8,2).toInt(&ok,16);
int TL=result.at(i).mid(54,12).mid(10,2).toInt(&ok,16);
double hum = (HH*256+HL)/10.0; //湿度，以%为单位
double tem = (TH*256+TL)/10.0; //温度，以°C为单位

temAHumTable->setItem(i,10,new QTableWidgetItem(QString::number(tem)));
temAHumTable->setItem(i,11,new QTableWidgetItem(QString::number(hum)));
}
break;
}

case 1:{
QStringList result=database->slot_query(sensorNum[0],sensorId);
for(i=0;i<result.length();i++){
smokeTable->setItem(i,0,new QTableWidgetItem(result.at(i).mid(0,24))); 
smokeTable->setItem(i,1,new QTableWidgetItem(result.at(i).mid(24,2)));
smokeTable->setItem(i,2,new QTableWidgetItem(result.at(i).mid(26,8)));
smokeTable->setItem(i,3,new QTableWidgetItem(result.at(i).mid(34,8)));
smokeTable->setItem(i,4,new QTableWidgetItem(result.at(i).mid(42,2)));
smokeTable->setItem(i,5,new QTableWidgetItem(result.at(i).mid(44,2)));
smokeTable->setItem(i,6,new QTableWidgetItem(result.at(i).mid(46,2)));
smokeTable->setItem(i,7,new QTableWidgetItem(result.at(i).mid(48,2)));
smokeTable->setItem(i,8,new QTableWidgetItem(result.at(i).mid(50,2)));
smokeTable->setItem(i,9,new QTableWidgetItem(result.at(i).mid(52,2)));
if(result.at(i).mid(64,2).compare("00")==0){
smokeTable->setItem(i,10,new QTableWidgetItem("no smoke"));
}
else{
smokeTable->setItem(i,10,new QTableWidgetItem("smoke"));
}
}
break;
}

case 2:{
QStringList result=database->slot_query(sensorNum[2],sensorId);

for(i=0;i<result.length();i++){
peopleTable->setItem(i,0,new QTableWidgetItem(result.at(i).mid(0,24))); 
peopleTable->setItem(i,1,new QTableWidgetItem(result.at(i).mid(24,2)));
peopleTable->setItem(i,2,new QTableWidgetItem(result.at(i).mid(26,8)));
peopleTable->setItem(i,3,new QTableWidgetItem(result.at(i).mid(34,8)));
peopleTable->setItem(i,4,new QTableWidgetItem(result.at(i).mid(42,2)));
peopleTable->setItem(i,5,new QTableWidgetItem(result.at(i).mid(44,2)));
peopleTable->setItem(i,6,new QTableWidgetItem(result.at(i).mid(46,2)));
peopleTable->setItem(i,7,new QTableWidgetItem(result.at(i).mid(48,2)));
peopleTable->setItem(i,8,new QTableWidgetItem(result.at(i).mid(50,2)));
peopleTable->setItem(i,9,new QTableWidgetItem(result.at(i).mid(52,2)));
if(result.at(i).mid(64,2).compare("00")==0){
peopleTable->setItem(i,10,new QTableWidgetItem("no people"));
}
else{
peopleTable->setItem(i,10,new QTableWidgetItem("people"));
}
}
break;
}   	
}
}



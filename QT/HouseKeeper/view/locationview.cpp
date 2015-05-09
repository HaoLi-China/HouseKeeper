#include <QtGui>
#include <QUrl>
#include "locationview.h"
#include <QtWebKit/QWebFrame>
#include "smallkeyboard.h"

//构造函数
LocationView::LocationView( QWidget* parent,DataBase *db) :QWidget (parent){
database=db;
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
LocationView::~LocationView(){

}

//初始化
void LocationView::init(){

setupUi(this); 

 background.load("images/main.jpg");
 QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

flag1=false;
flag2=false;
isLocationChanged=false;

QStringList stl1=database->readUserList("00");
QStringList stl2=database->readUserList("01");

int i;
for(i=0;i<stl1.length();i++){
QString data=database->queryLocation(stl1.at(i));
map.insert(stl1.at(i),data);
}

for(i=0;i<stl2.length();i++){
QString data=database->queryLocation(stl2.at(i));
map.insert(stl2.at(i),data);
}

comboName->addItems(stl1);
comboName->addItems(stl2);

gps=new Gps();

mapView->load(QUrl("./googleMap/map.html"));
mapView->show(); 

frame = mapView->page()->mainFrame();

connect(mapView, SIGNAL(loadFinished(bool)), this, SLOT(timerStart(bool)));

timer1 = new QTimer(this);   //新建定时器
connect(timer1,SIGNAL(timeout()),this,SLOT(updateInfo()));//关联定时器计满信号和相应的槽函数

timer2 = new QTimer(this);   //新建定时器
connect(timer2,SIGNAL(timeout()),this,SLOT(setMark()));//关联定时器计满信号和相应的槽函数

connect( database, SIGNAL(signal_getNewLocation(QString)), this, SLOT(slot_getNewLocation(QString)) );

myLatitudeArea=new MyEdit();
myLongitudeArea=new MyEdit();
myLatitudeArea->setText("null");
myLongitudeArea->setText("null");

myLatitudeArea->setObjectName(QString::fromUtf8("myLatitudeArea"));
myLatitudeArea->setEnabled(true);
horizontalLayout_2->addWidget(myLatitudeArea);

myLongitudeArea->setObjectName(QString::fromUtf8("myLongitudeArea"));
myLongitudeArea->setEnabled(true);
horizontalLayout_3->addWidget(myLongitudeArea);

connect(myLatitudeArea, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
connect(myLongitudeArea, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));

QRegExp regExp1("[-]{0,1}[0-9]*.[0-9]*");
   
myLatitudeArea->setValidator(new QRegExpValidator(regExp1, this));
myLongitudeArea->setValidator(new QRegExpValidator(regExp1, this));

this->show();
}

//更新位置信息
void LocationView::updateInfo(){
gps_info=gps->getGpsInfo();

qDebug()<<gps_info.latitude;
qDebug()<<gps_info.longitude;
qDebug()<<gps_info.NS;
qDebug()<<gps_info.EW;
qDebug()<<gps_info.status;
if(gps_info.status.length()==0){
    timer1->stop();
    QMessageBox::warning(this, tr("Warning:"),
                                  tr("Can't get location,please set it yourself!"));
    qDebug()<<"a";
    return;
}

if(gps_info.status.compare("A")==0){
double dMyLatitude;
double dMyLongitude;
if(gps_info.NS.compare("N")==0){
dMyLatitude=gps_info.latitude;
dMyLongitude=gps_info.longitude;
}
else{
dMyLatitude=-gps_info.latitude;
dMyLongitude=-gps_info.longitude;
}

myLatitudeArea->setText(QString::number(dMyLatitude));
myLongitudeArea->setText(QString::number(dMyLongitude));
timer1->stop();
return;
}
}

//设置地图标记
void LocationView::setMark(){
QMap<QString,QString>::iterator it = map.find(comboName->currentText()); //找到特定的“键-值”对  
QStringList strl=(it.value()).split("/");
 qDebug()<<"b";
qDebug()<<it.value();
qDebug()<<strl.length();
if(strl.length()==3){
opLatitudeArea->setText(strl.at(0));
opLongitudeArea->setText(strl.at(1));
timeEdit->setText(strl.at(2));
}
else{
opLatitudeArea->setText("null");
opLongitudeArea->setText("null");
timeEdit->setText("null");
}
 qDebug()<<"d";
QString dMyLatitude=myLatitudeArea->text();
QString dMyLongitude=myLongitudeArea->text();
QString dOpLatitude=opLatitudeArea->text();
QString dOpLongitude=opLongitudeArea->text(); 
 qDebug()<<"e";
if(dMyLatitude.compare("null")!=0&&dMyLongitude.compare("null")!=0&&myLatitudeArea->hasAcceptableInput()&&myLongitudeArea->hasAcceptableInput()){
qDebug()<<"ee"+dMyLatitude;
qDebug()<<"ee"+dMyLongitude;
QString cmd = QString("setMarker1(\"%1\",\"%2\",\"%3\")").arg(dMyLatitude).arg(dMyLongitude).arg(QString("My location!"));
frame->evaluateJavaScript(cmd);
flag1=true;
if(isLocationChanged){
isLocationChanged=false;
return;
}
}
else{
flag1=false;
}
 qDebug()<<"f";
if(dOpLatitude.compare("null")!=0&&dOpLongitude.compare("null")!=0){
QString cmd = QString("setMarker2(\"%1\",\"%2\",\"%3\")").arg(dOpLatitude).arg(dOpLongitude).arg(QString(comboName->currentText()+"'s location!"));
frame->evaluateJavaScript(cmd);
flag2=true;
}
else{
flag2=false;
}
 qDebug()<<"g";
if(flag1&&flag2){
double distance=gps->getArcDistance(dMyLatitude.toDouble(),dMyLongitude.toDouble(),dOpLatitude.toDouble(),dOpLongitude.toDouble());
distanceArea->setText(QString::number(distance)+" km");
}
else{
distanceArea->setText("null");
}
}

//启动计时器
void LocationView::timerStart(bool flag){
if(flag){
timer1->start(1000);
timer2->start(1000);
}
}

//处理收到的消息
void LocationView::slot_getNewLocation(QString msg){
qDebug()<<"h";
qDebug()<<msg;
QStringList strl=msg.split("/");
QString data = strl.at(1)+"/"+strl.at(2)+"/"+QDateTime::currentDateTime().toString();
map.insert(strl.at(0),data);
}

//显示小键盘
void LocationView::slot_showKeyboard(MyEdit* myedit){
SmallKeyboard smallKeyboard(this);
if(smallKeyboard.exec()){
myedit->setText(smallKeyboard.getContent());
isLocationChanged=true;
}
}


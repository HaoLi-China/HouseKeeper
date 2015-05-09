#include <QtGui>
#include "callingView.h"

CallingView::CallingView( QWidget* parent,Gprs *_gprs) : QDialog( parent), gprs(_gprs){
//setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);

background.load("images/phonebg.jpg");
face.load("./images/face.jpg");

 QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

picLabel->setPixmap(face);

time=0;

fd=gprs->getFd();

userListCL=new UserListCL();

timer = new QTimer(this);   //新建定时器
connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));//关联定时器计满信号和相应的槽函数
timer->start(1000);

//链接信号和槽
connect(hUButton, SIGNAL(clicked()), this, SLOT(hangUP()));
connect(gprs, SIGNAL(hangUp()), this, SLOT(close()));
}

//析构函数
CallingView::~CallingView(){

}

//挂断电话
void CallingView::hangUP(){
SerialPort::nwrite(fd,"ATH\r\n",sizeof("ATH\r\n"));
close();
}

//显示号码
void CallingView::setNum(QString num){
QString str=userListCL->rcIsHas(num);
if(str.length()==0){
numLabel->setText(num);
}
else{
numLabel->setText(str);
}
}

//更新时间
void CallingView::updateTime()
{ 
    time++;
    int hour=(int)time%86400/3600;
    int minute=(int)time%3600/60;
    int second=(int)time%3600%60;
    QString shour = QString::number(hour, 10);
    QString sminute = QString::number(minute, 10);
    QString ssecond = QString::number(second, 10);
    if(hour<10){
    shour="0"+shour;
    }
    if(minute<10){
    sminute="0"+sminute;
    } 
    if(second<10){
    ssecond="0"+ssecond;
    }
    
   
    timeLabel->setText(shour+":"+sminute+":"+ssecond);
}



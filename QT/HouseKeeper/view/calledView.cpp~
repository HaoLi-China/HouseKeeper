#include <QtGui>
#include "calledView.h"

CalledView::CalledView( QWidget* parent,int _fd) : QDialog( parent), fd(_fd){
//setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);

background.load("images/phonebg.jpg");
face.load("./images/face.jpg");

 QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

picLabel->setPixmap(face);

userListCL=new UserListCL();

time=0;

timer = new QTimer(this);   //新建定时器
connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));//关联定时器计满信号和相应的槽函数

//链接信号和槽
connect(atButton, SIGNAL(clicked()), this, SLOT(accept()));
connect(rtButton, SIGNAL(clicked()), this, SLOT(reject()));
}

//析构函数
CalledView::~CalledView(){

}

//拒绝接听电话
void CalledView::reject(){
SerialPort::nwrite(fd,"ATH\r\n",sizeof("ATH\r\n"));
//close();
}

//接听电话
void CalledView::accept(){
SerialPort::nwrite( fd,"ATA\r\n",sizeof("ATA\r\n") );
timer->start(1000);
}

//显示号码
void CalledView::setNum(QString num){
QString str=userListCL->rcIsHas(num);
if(str.length()==0){
numLabel->setText(num);
}
else{
numLabel->setText(str);
}
}

//更新时间
void CalledView::updateTime()
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

//停止计时
void CalledView::stopTimer()
{ 
   timer->stop();
   time=0;
   timeLabel->setText("00:00:00");
}


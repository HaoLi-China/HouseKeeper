#include <QtGui>
#include "callView.h"

//构造函数
CallView::CallView( QWidget* parent,Gprs *_gprs) : QDialog(parent), gprs(_gprs)
{
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
CallView::~CallView(){

}

//初始化
void CallView::init(){
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

fd=gprs->getFd();

DigitalKeyboard *digitalKeyboard=new DigitalKeyboard(this);
digitalKeyboard->setGeometry(15, 65, 195, 229);

//链接信号和槽
connect(call, SIGNAL(clicked()), this, SLOT(clickCall()));
connect(contactsButton, SIGNAL(clicked()), this, SLOT(toContactsView()));

this->show();
}

//键盘输入
void CallView::clickTextButton(){
QString string=((QPushButton *)sender())->text();
str+=string;
numArea->setText(str);
}

//输入空格符
void CallView::clickSpace(){
str+=" ";
numArea->setText(str);
}

//删除号码串最后一个数字
void CallView::clickBack(){
str=str.mid(0,str.length()-1);
numArea->setText(str);
}

//清空号码串
void CallView::clickClear(){
str="";
numArea->setText(str);
}

//转到联系人界面
void CallView::toContactsView(){
ContactsView *contactsView=new ContactsView(0,gprs);
contactsView->init();
close();
}

//拨号
void CallView::clickCall(){
if(fd>0)
{	
QString DialCommand="ATD"+str+";\r\n";
SerialPort::nwrite(fd,DialCommand.toLatin1().data(),DialCommand.length());
info->setText("calling......");
}
CallingView callingView(0,gprs);
callingView.setNum(str);
if (callingView.exec()) {

}
}




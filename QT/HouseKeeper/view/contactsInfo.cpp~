#include <QtGui>
#include "contactsInfo.h"

//构造函数
ContactsInfo::ContactsInfo( QWidget* parent,Gprs *_gprs) : QDialog(parent), gprs(_gprs)
{
//setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);


fd=gprs->getFd();

//链接信号和槽
connect(callButton, SIGNAL(clicked()), this, SLOT(call()));
connect(sendButton, SIGNAL(clicked()), this, SLOT(send()));
}

//析构函数
ContactsInfo::~ContactsInfo()
{

}

//拨打电话
void ContactsInfo::call()
{
if(fd>0)
{	
QString DialCommand="ATD"+numLabel->text()+";\r\n";
SerialPort::nwrite(fd,DialCommand.toLatin1().data(),DialCommand.length());
}
CallingView callingView(0,gprs);
callingView.setNum(numLabel->text());
if (callingView.exec()) {

}
}

//发送短信
void ContactsInfo::send()
{
MessageView *messageView=new MessageView(0,gprs);
messageView->init();
messageView->setContacts(nameLabel->text());
messageView->setPhoneNum(numLabel->text());
close();
}

//设置信息
void ContactsInfo::setInfo(QString name,QString phoneNum)
{
 nameLabel->setText(name);
 numLabel->setText(phoneNum);
}

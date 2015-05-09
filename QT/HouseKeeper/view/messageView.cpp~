#include <QtGui>
#include "messageView.h"

//构造函数
MessageView::MessageView( QWidget* parent,Gprs *_gprs) :QDialog (parent), gprs(_gprs){
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
MessageView::~MessageView(){

}

//初始化
void MessageView::init(){
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

message="";
num="";

Keyboard *keyboard=new Keyboard(this);
keyboard->setGeometry(0, 160, 287, 202);

//链接信号和槽
connect(send, SIGNAL(clicked()), this, SLOT(clickSend()));
connect(contactsButton, SIGNAL(clicked()), this, SLOT(toContactsView()));

this->show();
}

//键盘输入
void MessageView::clickTextButton(){
QString str=((QPushButton *)sender())->text();
if(numberEdit->hasFocus()){
num+=str;
numberEdit->setText(num);
}
else if(msgEdit->hasFocus()){
message+=str;
msgEdit->setText(message);
msgEdit->moveCursor(QTextCursor::End);
}
}

//退格
void MessageView::clickBackspace(){
if(numberEdit->hasFocus()){
num=num.mid(0,num.length()-1);
numberEdit->setText(num);
}
else if(msgEdit->hasFocus()){
message=message.mid(0,message.length()-1);
msgEdit->setText(message);
msgEdit->moveCursor(QTextCursor::End);
}
}

//发送消息
void MessageView::clickSend(){
//num=numberEdit->text();
message="";
message.append(msgEdit->toPlainText());
gprs->sendMsg(num,message);
numberEdit->setText("");
msgEdit->setText("");
}

//空格
void MessageView::clickSpace(){
if(numberEdit->hasFocus()){
num+=" ";
numberEdit->setText(num);
}
else if(msgEdit->hasFocus()){
message+=" ";
msgEdit->setText(message);
msgEdit->moveCursor(QTextCursor::End);
}
}

//换行
void MessageView::clickNextLine(){
if(numberEdit->hasFocus()){
num+="\n";
numberEdit->setText(num);
}
else if(msgEdit->hasFocus()){
message+="\n";
msgEdit->setText(message);
msgEdit->moveCursor(QTextCursor::End);
}
}

//清除
void MessageView::clickClear(){
if(numberEdit->hasFocus()){
num="";
numberEdit->setText(num);
}
else if(msgEdit->hasFocus()){
message="";
msgEdit->setText(message);
}
}

//转到联系人界面
void MessageView::toContactsView(){
ContactsView *contactsView=new ContactsView(0,gprs);
contactsView->init();
close();
}

//设置联系人
void MessageView::setContacts(QString contacts){
numberEdit->setText(contacts);
numberEdit->setEnabled(false);
}

//设置电话号码
void MessageView::setPhoneNum(QString number){
num=number;
}



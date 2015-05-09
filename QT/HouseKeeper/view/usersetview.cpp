#include <QtGui>
#include "usersetview.h"
#define Tip "I am housekeeper!It is my pleasure to help you."

//构造函数
UserSetView::UserSetView(QWidget *parent,Gprs *_gprs):QDialog(parent), gprs(_gprs){
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
UserSetView::~UserSetView(){

}

//初始化
void UserSetView::init(){
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

userListCL=new UserListCL();

readList();

//链接信号和槽
connect(addButton, SIGNAL(clicked()), this, SLOT(addUser()));
connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteUser()));

this->show();
}

//增加远程控制用户
void UserSetView::addUser(){
AddUserDialog addUserDialog(this);
if (addUserDialog.exec()) {
QString number=addUserDialog.getPnoneNum();
if(userListCL->ruWrite(number)){
userList->addItem(number);
gprs->sendMsg(number,Tip);
}
}
}

//删除远程控制用户
void UserSetView::deleteUser(){
int index=userList->currentRow();
if(userListCL->ruDeleteLine(index)){
userList->takeItem(index);
}
}

//读user文本文件
void UserSetView::readList(){
QStringList uL=userListCL->ruRead();
for (int i = 0; i < uL.count(); i++) {
       QString str = static_cast<QString>(uL.at(i));
       userList->addItem(str);
}
//下面的方法好像已经废弃了所以用了没反应
//userList->removeItemWidget(userList->currentItem());
}

#include <QtGui>
#include "contactsView.h"

//构造函数
ContactsView::ContactsView( QWidget* parent,Gprs *_gprs) : QDialog(parent), gprs(_gprs)
{
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
ContactsView::~ContactsView()
{

}

//初始化
void ContactsView::init(){
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

userListCL=new UserListCL();

readList();

//链接信号和槽
connect(addButton, SIGNAL(clicked()), this, SLOT(addContacts()));
connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteContacts()));
connect(contactsList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(showInfo(QListWidgetItem*)));

this->show();
}

//添加新联系人
void ContactsView::addContacts()
{
AddConDialog addConDialog(this);
 if (addConDialog.exec()) {
QString name=addConDialog.getName();
QString phoneNum=addConDialog.getPnoneNum();
if(userListCL->rcWrite(name,phoneNum)){
contactsList->addItem(name);
}
}
}

//删除联系人
void ContactsView::deleteContacts()
{
int index=contactsList->currentRow();
if(userListCL->rcDeleteLine(index)){
contactsList->takeItem(index);
}
}

//读contacts文本文件
void ContactsView::readList(){
QStringList uL=userListCL->rcRead();
for (int i = 0; i < uL.count(); i++) {
       QString str = static_cast<QString>(uL.at(i));
       QStringList strl = str.split(" ");
       QString name=static_cast<QString>(strl.at(0));
       contactsList->addItem(name);
}
//下面的方法好像已经废弃了所以用了没反应
//userList->removeItemWidget(userList->currentItem());
}

//显示联系人信息
void ContactsView::showInfo(QListWidgetItem *item){
int index=contactsList->row(item);
QString string=userListCL->rcReadLine(index);
QStringList strl = string.split(" ");
QString name=static_cast<QString>(strl.at(0));
QString number=static_cast<QString>(strl.at(1));
ContactsInfo contactsInfo(this,gprs);
contactsInfo.setInfo(name,number);
if (contactsInfo.exec()) {

}
}

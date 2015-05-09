#include <QtGui>
#include "msgBookView.h"

//构造函数
MsgBookView::MsgBookView( QWidget* parent,Gprs *_gprs) : QDialog(parent), gprs(_gprs)
{
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
MsgBookView::~MsgBookView()
{

}

//初始化
void MsgBookView::init(){
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

userListCL=new UserListCL();

readList();

//链接信号和槽
connect(openButton, SIGNAL(clicked()), this, SLOT(openMsg()));
connect(deleteButton, SIGNAL(clicked()), this, SLOT(deleteMsg()));

this->show();
}

//打开信息
void MsgBookView::openMsg(){
int index=messageList->currentRow();
QString content=userListCL->rmReadLine(index);
QStringList strl = content.split("\n");
QString msg="Content:";
QString number=static_cast<QString>(strl.at(0));
QString time=static_cast<QString>(strl.at(1));
for(int i=2;i<strl.count()-1;i++){
msg=msg+"\n"+static_cast<QString>(strl.at(i));
}
QString str="Time:\n"+time+"\n"+msg;
MessageRecieved *messageRecieved=new MessageRecieved(0,gprs,number,str);
messageRecieved->init();
}

//删除信息
void MsgBookView::deleteMsg(){
int index=messageList->currentRow();
if(userListCL->rmDeleteLine(index)){
messageList->takeItem(index);
}
}

//读message文本文件
void MsgBookView::readList(){
QStringList uL=userListCL->rmRead();
for (int i = 0; i < uL.count(); i++) {
       QString str = static_cast<QString>(uL.at(i));
       messageList->addItem(str);
}
}

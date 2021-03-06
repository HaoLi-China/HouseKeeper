#include <QtGui>
#include "phoneview.h"

//构造函数
PhoneView::PhoneView(QWidget* parent,Gprs *grs):QWidget(parent)
{
gprs=grs;
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
PhoneView::~PhoneView(){

}

//初始化
void PhoneView::init(){
setupUi(this);

background.load("images/phonebg.jpg");
callIcon.load("images/phone.png");
userSetIcon.load("images/usersetting.png");
contactsIcon.load("images/contrasts.png");
messageIcon.load("images/message.png");
msgBookIcon.load("images/mesrecord.png");

callButton->setIcon(QIcon(callIcon));
userSetButton->setIcon(QIcon(userSetIcon));
contactsButton->setIcon(QIcon(contactsIcon));
messageButton->setIcon(QIcon(messageIcon));
msgBookButton->setIcon(QIcon(msgBookIcon));

callButton->setFlat(true);
userSetButton->setFlat(true);
contactsButton->setFlat(true);
messageButton->setFlat(true);
msgBookButton->setFlat(true);

callButton->setIconSize(QSize(80,80));
userSetButton->setIconSize(QSize(80,80));
contactsButton->setIconSize(QSize(80,80));
messageButton->setIconSize(QSize(80,80));
msgBookButton->setIconSize(QSize(80,80));

    QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

//链接信号和槽
 connect(callButton, SIGNAL(clicked()), this, SLOT(openCallView()));
 connect(messageButton, SIGNAL(clicked()), this, SLOT(openMessageView()));
 connect(contactsButton, SIGNAL(clicked()), this, SLOT(openContactsView()));
 connect(msgBookButton, SIGNAL(clicked()), this, SLOT(openMsgBookView()));
 connect(userSetButton, SIGNAL(clicked()), this, SLOT(openUserSetView()));

 this->show();
}


//打开拨打电话界面
void PhoneView::openCallView()
{
CallView *callView=new CallView(0,gprs);
    callView->init();
}

//打开发送短信界面
void PhoneView::openMessageView()
{
MessageView *messageView=new MessageView(0,gprs);
    messageView->init();
}

//打开联系人界面
void PhoneView::openContactsView()
{
    ContactsView *contactsView=new ContactsView(0,gprs);
    contactsView->init();
}

//打开信息本界面
void PhoneView::openMsgBookView()
{
MsgBookView *msgBookView=new MsgBookView();
    msgBookView->init();
}

//打开用户设置界面
void PhoneView::openUserSetView()
{
UserSetView *userSetView=new UserSetView(0,gprs);
   userSetView->init();
}


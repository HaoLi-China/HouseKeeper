#include "setting.h"

//构造函数
Setting::Setting(QWidget *parent,DataBase *db) :QWidget(parent)
{
    database=db;
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
Setting::~Setting()
{    
}

//初始化
void Setting::init(){
    setupUi(this);

background.load("images/main.jpg");
managerIcon.load("images/manager.png");
webUserIcon.load("images/webuser.png");
remoteIcon.load("images/remote.png");

ManagerButton->setIcon(QIcon(managerIcon));
WebUserButton->setIcon(QIcon(webUserIcon));
RemoteButton->setIcon(QIcon(remoteIcon));

 ManagerButton->setIconSize(QSize(201,42));
    WebUserButton->setIconSize(QSize(201,42));
    RemoteButton->setIconSize(QSize(201,42));

    QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

    //按钮点击事件和相应的槽函数
    connect(ManagerButton,SIGNAL(clicked()),this,SLOT(slot_toChangePasswd()));
    connect(WebUserButton,SIGNAL(clicked()),this,SLOT(slot_toWebUser()));
    connect(RemoteButton,SIGNAL(clicked()),this,SLOT(slot_toRemote()));
 
    this->show();
}

//转向修改密码界面
void Setting::slot_toChangePasswd()
{
    ChangePasswd *changepasswd=new ChangePasswd(0,database);
    changepasswd->init();
}

//转向远程控制账户管理界面
void Setting::slot_toRemote()
{
    AddOrDelView *remote=new AddOrDelView(0,database,"01");
    remote->init();
}

//转向网页用户管理界面
void Setting::slot_toWebUser()
{
    AddOrDelView *webuser=new AddOrDelView(0,database,"02");
    webuser->init();
}



#include "addordelview.h"

//构造函数
AddOrDelView::AddOrDelView(QWidget *parent,DataBase *db,QString ut) :QWidget(parent)
{ 
setAttribute(Qt::WA_DeleteOnClose);
    database=db; 
    userType=ut;
}

//初始化
void AddOrDelView::init(){
 setupUi(this);

 background.load("images/main.jpg");
 addIcon.load("images/adduser.png");  
 delIcon.load("images/deluser.png");

addUserButton->setIcon(QIcon(addIcon));
delUserButton->setIcon(QIcon(delIcon));

 addUserButton->setIconSize(QSize(201,42));
 delUserButton->setIconSize(QSize(201,42));
    
   QPalette palette1;
   palette1.setBrush(this->backgroundRole(), QBrush(background));
   this->setPalette(palette1);

 if(userType.compare("01")==0){
   setWindowTitle("Remote");
   headLabel->setText("Remote Control");
 }
 else if(userType.compare("02")==0){
   setWindowTitle("WebUser");
   headLabel->setText("Web User");
 } 

//按钮点击事件和相应的槽函数
 connect(addUserButton,SIGNAL(clicked()),this,SLOT(slot_toAddUser()));
 connect(delUserButton, SIGNAL(clicked()), this, SLOT(slot_toDeleteUser()));
 this->show();
}

//析构函数
AddOrDelView::~AddOrDelView()
{
}

//转向添加用户界面
void AddOrDelView::slot_toAddUser(){
    AddUser *adduser=new AddUser(0,database,userType);
    adduser->init();
}

//转向删除用户界面
void AddOrDelView::slot_toDeleteUser(){
 DeleteUser *deleteuser=new DeleteUser(0,database,userType);
    deleteuser->init();
}



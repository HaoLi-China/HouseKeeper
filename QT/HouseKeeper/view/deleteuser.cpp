#include "deleteuser.h"

//构造函数
DeleteUser::DeleteUser(QWidget *parent,DataBase *db,QString ut) : QWidget(parent)
{
    database=db;
    userType=ut;
    setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
DeleteUser::~DeleteUser()
{
}

//初始化
void DeleteUser::init(){
    setupUi(this);

 background.load("images/main.jpg");

   QPalette palette1;
   palette1.setBrush(this->backgroundRole(), QBrush(background));
   this->setPalette(palette1);

    readUser(userType);

    //按钮点击事件和相应的槽函数
    connect(commitButton,SIGNAL(clicked()),this,SLOT(slot_delete()));
    this->show();
}

//读取用户名
void DeleteUser::readUser(QString type){
QStringList userList = database->readUserList(type);
userComboBox->addItems(userList);
}

//删除用户
void DeleteUser::slot_delete(){
if(database->deleteUser(userComboBox->currentText())){
infoLabel->setText("     succeed!");
userComboBox->clear();
readUser(userType);
}
else{
infoLabel->setText("     failed!");
}
}

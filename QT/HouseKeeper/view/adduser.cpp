#include "adduser.h"
#include "smallkeyboard.h"

//构造函数
AddUser::AddUser(QWidget *parent,DataBase *db,QString ut) :QWidget(parent)
{
    database=db;
    userType=ut;
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
AddUser::~AddUser()
{
}

//初始化
void AddUser::init(){
    setupUi(this);

    background.load("images/main.jpg");

   QPalette palette1;
   palette1.setBrush(this->backgroundRole(), QBrush(background));
   this->setPalette(palette1);

    username="";
    pwd="";
    confirmPwd="";

    pwdEdit = new MyEdit(AddMainframe);
    pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
    pwdEdit->setGeometry(QRect(160, 110, 191, 27));
    confirmEdit = new MyEdit(AddMainframe);
    confirmEdit->setObjectName(QString::fromUtf8("confirmEdit"));
    confirmEdit->setGeometry(QRect(160, 150, 191, 27));
    userNameEdit = new MyEdit(AddMainframe);
    userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
    userNameEdit->setGeometry(QRect(160, 70, 191, 27)); 
    
    //按钮点击事件和相应的槽函数
    connect(saveButton,SIGNAL(clicked()),this,SLOT(slot_commit()));
    connect(cancelButton,SIGNAL(clicked()),this,SLOT(slot_cancel()));

    connect(userNameEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    connect(pwdEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    connect(confirmEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    this->show();
}

//显示小键盘
void AddUser::slot_showKeyboard(MyEdit* myedit){
SmallKeyboard smallKeyboard(this);
if(smallKeyboard.exec()){
myedit->setText(smallKeyboard.getContent());
}
}

//提交
void AddUser::slot_commit(){
    username=userNameEdit->text();
    pwd=pwdEdit->text();
    confirmPwd=confirmEdit->text();
    if(pwd.compare(confirmPwd)==0){
    if(!database->hasUser(username)){
    if(database->addUser(username,pwd,userType)){
        slot_cancel();
	infoLabel->setText("            Succeed!");
     }
     else{
        slot_cancel();
	infoLabel->setText("            Failed!");
       }
     }   
	else{
	slot_cancel();
	infoLabel->setText("Username has existed!");
	}	
}
else{
slot_cancel();
infoLabel->setText("Password is not consistent!");
}
}

//取消
void AddUser::slot_cancel(){

    userNameEdit->setText("");
    pwdEdit->setText("");
    confirmEdit->setText(""); 

    username="";
    pwd="";
    confirmPwd="";
}

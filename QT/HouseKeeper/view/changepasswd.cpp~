#include "changepasswd.h"
#include "smallkeyboard.h"

//构造函数
ChangePasswd::ChangePasswd(QWidget *parent,DataBase *db) :
    QWidget(parent)
{
   database=db;
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
ChangePasswd::~ChangePasswd()
{
}

//初始化
void ChangePasswd::init()
{
    setupUi(this);


    background.load("images/main.jpg");

    QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

    oldPwd="";
    newPwd="";
    confirmPwd="";

    oldPwdEdit = new MyEdit(ChangeMainframe);
    oldPwdEdit->setObjectName(QString::fromUtf8("oldPwdEdit"));
    oldPwdEdit->setGeometry(QRect(170, 70, 181, 27));
    newPwdEdit = new MyEdit(ChangeMainframe);
    newPwdEdit->setObjectName(QString::fromUtf8("newPwdEdit"));
    newPwdEdit->setGeometry(QRect(170, 110, 181, 27));
    confirmEdit = new MyEdit(ChangeMainframe);
    confirmEdit->setObjectName(QString::fromUtf8("confrimEdit"));
    confirmEdit->setGeometry(QRect(170, 150, 181, 27));

    //按钮点击事件和相应的槽函数
    connect(saveButton,SIGNAL(clicked()),this,SLOT(slot_commit()));
    connect(cancelButton,SIGNAL(clicked()),this,SLOT(slot_cancel()));

    connect(oldPwdEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    connect(newPwdEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    connect(confirmEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    this->show();
}

//显示小键盘
void ChangePasswd::slot_showKeyboard(MyEdit* myedit){
SmallKeyboard smallKeyboard(this);
if(smallKeyboard.exec()){
myedit->setText(smallKeyboard.getContent());
}
}

//提交
void ChangePasswd::slot_commit(){
oldPwd=oldPwdEdit->text();
newPwd=newPwdEdit->text();
confirmPwd=confirmEdit->text();
if(newPwd.compare(confirmPwd)==0){
 if(database->userChecked("admin",oldPwd,"00")){
    if(database->userUpdate("admin",newPwd,"00")){
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
	infoLabel->setText("Username or old password is wrong!");
	}	
}
else{
slot_cancel();
infoLabel->setText("Password is not consistent!");
}
}

//取消
void ChangePasswd::slot_cancel(){
    oldPwdEdit->setText("");
    newPwdEdit->setText("");
    confirmEdit->setText("");
    oldPwd="";
    newPwd="";
    confirmPwd="";
}

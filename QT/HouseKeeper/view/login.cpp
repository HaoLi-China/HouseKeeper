#include <QtGui>
#include "login.h"
#include "help.h"
#include "smallkeyboard.h"

//构造函数
Login::Login(QWidget *parent,DataBase *db,ZigBee *zb,Gprs *grs):QWidget(parent)
{
    //setAttribute(Qt::WA_DeleteOnClose);
    setupUi(this);

	loginIcon.load("images/loginbutton.png");
	rstIcon.load("images/resetbutton.png");
	loginBack.load("images/loginbg.png");
        background.load("images/main.jpg");

        loginButton->setIcon(QIcon(loginIcon));
	resetButton->setIcon(QIcon(rstIcon));

        loginButton->setIconSize(QSize(61,27));
        resetButton->setIconSize(QSize(61,27));

        QPalette palette2;
        palette2.setBrush(this->backgroundRole(), QBrush(background));
	this->setPalette(palette2);

        QPalette palette1;
        palette1.setBrush(widget->backgroundRole(),QBrush(loginBack));
	widget->setPalette(palette1);

    nameEdit=new MyEdit(widget);
    pwdEdit=new MyEdit(widget);

    
    nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
    nameEdit->setGeometry(QRect(125, 67, 181, 27));
    nameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
     
    pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
    pwdEdit->setGeometry(QRect(125, 107, 181, 27));
    pwdEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

    username="";
    pwd="";
    database=db;
    zigBee=zb;
    gprs=grs;

    //按钮点击事件和相应的槽函数
    connect(loginButton,SIGNAL(clicked()),this,SLOT(slot_login()));
    connect(resetButton,SIGNAL(clicked()),this,SLOT(slot_reset()));

    connect(nameEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
    connect(pwdEdit, SIGNAL(signal_edit(MyEdit*)), this, SLOT(slot_showKeyboard(MyEdit*)));
}

//析构函数
Login::~Login()
{
}

//转到主界面
void Login::toMainView()
{
    mainview=new MainView(0,database,zigBee,gprs);
    mainview->show();
    this->close();
}

//登录提交
void Login::slot_login(){
    //toMainView();
    username=nameEdit->text();
    pwd=pwdEdit->text();
    if(database->userChecked(username,pwd,"00")){
    toMainView();
	}   
	else{
	slot_reset();
	infoLabel->setText("username or password is wrong!");
	}	

}

//重置用户名和密码
void Login::slot_reset()
{
    nameEdit->setText("");
    pwdEdit->setText("");
    username="";
    pwd="";
}

//显示小键盘
void Login::slot_showKeyboard(MyEdit* myedit){
SmallKeyboard smallKeyboard(this);
if(smallKeyboard.exec()){
myedit->setText(smallKeyboard.getContent());
}
}

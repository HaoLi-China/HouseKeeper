#include <QtGui>
#include "addUserDialog.h"

//构造函数
AddUserDialog::AddUserDialog(QWidget* parent):QDialog (parent)
{
//setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

phoneNum="";

DigitalKeyboard *digitalKeyboard=new DigitalKeyboard(this);
digitalKeyboard->setGeometry(10, 65, 195, 229);

//链接信号和槽
connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
}

//析构函数
AddUserDialog::~AddUserDialog(){

}

//键盘输入
void AddUserDialog::clickTextButton(){
QString str=((QPushButton *)sender())->text();
if(numberEdit->hasFocus()){
phoneNum+=str;
numberEdit->setText(phoneNum);
}
}

//退格
void AddUserDialog::clickBack(){
if(numberEdit->hasFocus()){
phoneNum=phoneNum.mid(0,phoneNum.length()-1);
numberEdit->setText(phoneNum);
}
}

//空格
void AddUserDialog::clickSpace(){
if(numberEdit->hasFocus()){
phoneNum+=" ";
numberEdit->setText(phoneNum);
}
}

//清除
void AddUserDialog::clickClear(){
if(numberEdit->hasFocus()){
phoneNum="";
numberEdit->setText(phoneNum);
}
}


//获得联系人电话号码
QString AddUserDialog::getPnoneNum(){
return phoneNum;
}

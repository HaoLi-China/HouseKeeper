#include <QtGui>
#include "addConDialog.h"

//构造函数
AddConDialog::AddConDialog(QWidget* parent):QDialog (parent)
{
//setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);

background.load("images/phonebg.jpg");

QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

phoneNum="";
name="";

Keyboard *keyboard=new Keyboard(this);
keyboard->setGeometry(0, 80, 287, 202);

//链接信号和槽
connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
}

//析构函数
AddConDialog::~AddConDialog(){

}

//键盘输入
void AddConDialog::clickTextButton(){
QString str=((QPushButton *)sender())->text();
if(numberEdit->hasFocus()){
phoneNum+=str;
numberEdit->setText(phoneNum);
}
else if(nameEdit->hasFocus()){
name+=str;
nameEdit->setText(name);
}
}

//退格
void AddConDialog::clickBackspace(){
if(numberEdit->hasFocus()){
phoneNum=phoneNum.mid(0,phoneNum.length()-1);
numberEdit->setText(phoneNum);
}
else if(nameEdit->hasFocus()){
name=name.mid(0,name.length()-1);
nameEdit->setText(name);
}
}

//空格
void AddConDialog::clickSpace(){
if(numberEdit->hasFocus()){
phoneNum+=" ";
numberEdit->setText(phoneNum);
}
else if(nameEdit->hasFocus()){
name+=" ";
nameEdit->setText(name);
}
}

//换行
void AddConDialog::clickNextLine(){
if(numberEdit->hasFocus()){
phoneNum+="\n";
numberEdit->setText(phoneNum);
}
else if(nameEdit->hasFocus()){
name+="\n";
nameEdit->setText(name);
}
}

//清除
void AddConDialog::clickClear(){
if(numberEdit->hasFocus()){
phoneNum="";
numberEdit->setText(phoneNum);
}
else if(nameEdit->hasFocus()){
name="";
nameEdit->setText(name);
}
}


//获得联系人电话号码
QString AddConDialog::getPnoneNum(){
return phoneNum;
}

//获得联系人姓名
QString AddConDialog::getName(){
return name;
}




#include "about.h"
#include "safesetting.h"

//构造函数
SafeSetting::SafeSetting(QWidget *parent,bool flag) :QDialog(parent)
{
setAttribute(Qt::WA_DeleteOnClose);
setupUi(this);
safeCheckBox->setChecked(flag);
}

//析构函数
SafeSetting::~SafeSetting()
{

}

//初始化
void SafeSetting::init(){
background.load("images/main.jpg");
QPalette palette1;
palette1.setBrush(this->backgroundRole(), QBrush(background));
this->setPalette(palette1);

connect(okButton, SIGNAL(clicked()), this, SLOT(slot_setSafeFlag()));
this->show();
}

//设置安全设置开关
void SafeSetting::slot_setSafeFlag(){
    emit(signal_setSafeFlag(safeCheckBox->isChecked()));
    close();
}


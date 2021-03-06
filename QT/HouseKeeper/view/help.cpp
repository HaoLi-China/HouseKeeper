#include "help.h"

//构造函数
Help::Help(QWidget *parent) : QWidget(parent)
{
setAttribute(Qt::WA_DeleteOnClose);
}

//析构函数
Help::~Help()
{
    
}

//初始化
void Help::init(){
  setupUi(this);

    background.load("images/bg.png");
    helpPic.load("images/usermenu.png");

    QPalette palette1;
    palette1.setBrush(this->backgroundRole(), QBrush(background));
    this->setPalette(palette1);

    QPalette palette2;
    palette2.setBrush(ManualroupBox->backgroundRole(), QBrush(helpPic));
    ManualroupBox->setPalette(palette2);

  this->show();
}

#include <QtGui>
#include "digitalKeyboard.h"

//构造函数
DigitalKeyboard::DigitalKeyboard( QWidget* parent) : QWidget(parent)
{

setupUi(this);

//链接信号和槽
connect(one, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(two, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(three, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(four, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(five, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(six, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(seven, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(eight, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(nine, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(zero, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(left, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(right, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(space, SIGNAL(clicked()), parent, SLOT(clickSpace()));
connect(back, SIGNAL(clicked()), parent, SLOT(clickBack()));
connect(clear, SIGNAL(clicked()), parent, SLOT(clickClear()));
}

//析构函数
DigitalKeyboard::~DigitalKeyboard(){

}

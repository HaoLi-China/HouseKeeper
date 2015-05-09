#include "smallkeyboard.h"

//构造函数
SmallKeyboard::SmallKeyboard(QWidget *parent) :QDialog(parent)
{
    setupUi(this);
    content="";

//链接信号和槽
connect(backButton, SIGNAL(clicked()), this, SLOT(clickBack()));
connect(one, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(two, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(three, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(four, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(five, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(six, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(seven, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(eight, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(nine, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(zero, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(a, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(b, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(c, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(d, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(e, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(f, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(g, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(h, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(i, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(j, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(k, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(l, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(m, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(n, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(o, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(p, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(q, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(r, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(s, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(t, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(u, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(v, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(w, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(xB, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(yB, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(z, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(minusButtton, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(periodButton, SIGNAL(clicked()), this, SLOT(clickTextButton()));
connect(commaButton, SIGNAL(clicked()), this, SLOT(clickTextButton()));

connect(nextLineButton, SIGNAL(clicked()), this, SLOT(clickNextLine()));
connect(spaceButton, SIGNAL(clicked()), this, SLOT(clickSpace()));
connect(clearButton, SIGNAL(clicked()), this, SLOT(clickClear()));


connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
}

//析构函数
SmallKeyboard::~SmallKeyboard()
{
    
}

//键盘输入
void SmallKeyboard::clickTextButton(){
QString str=((QPushButton *)sender())->text();

content+=str;
inputEdit->setText(content);
}

//退格
void SmallKeyboard::clickBack(){
content=content.mid(0,content.length()-1);
inputEdit->setText(content);
}

//空格
void SmallKeyboard::clickSpace(){
content+=" ";
inputEdit->setText(content);
}

//清除
void SmallKeyboard::clickClear(){
content="";
inputEdit->setText(content);
}

//换行
void SmallKeyboard::clickNextLine(){
content+="\n";
inputEdit->setText(content);
}

//获得连接方电话号码
QString SmallKeyboard::getContent(){
    return inputEdit->text();
}


#include <QtGui>
#include "keyboard.h"

Keyboard::Keyboard( QWidget* parent) :QWidget (parent){

setupUi(this);

//链接信号和槽
connect(backButton, SIGNAL(clicked()), parent, SLOT(clickBackspace()));
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
connect(a, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(b, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(c, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(d, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(e, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(f, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(g, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(h, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(i, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(j, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(k, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(l, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(m, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(n, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(o, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(p, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(q, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(r, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(s, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(t, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(u, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(v, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(w, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(xB, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(yB, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(z, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(apostrButtton, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(periodButton, SIGNAL(clicked()), parent, SLOT(clickTextButton()));
connect(commaButton, SIGNAL(clicked()), parent, SLOT(clickTextButton()));

connect(nextLineButton, SIGNAL(clicked()), parent, SLOT(clickNextLine()));
connect(spaceButton, SIGNAL(clicked()), parent, SLOT(clickSpace()));
connect(clearButton, SIGNAL(clicked()), parent, SLOT(clickClear()));
}

//析构函数
Keyboard::~Keyboard(){

}

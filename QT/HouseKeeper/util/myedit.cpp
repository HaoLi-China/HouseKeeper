#include "myedit.h"
//构造函数
MyEdit::MyEdit(QWidget *parent) :QLineEdit(parent)
{
}

//鼠标按下监听事件
void MyEdit::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    { 
       emit signal_edit(this);
    }
    QLineEdit::mousePressEvent(event);
}

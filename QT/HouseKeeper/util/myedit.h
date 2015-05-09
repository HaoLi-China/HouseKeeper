#ifndef MYEDIT_H
#define MYEDIT_H

#include <QtGui>

class MyEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MyEdit(QWidget *parent = 0);

signals:
    void signal_edit(MyEdit*);

protected:
    virtual void mousePressEvent(QMouseEvent *event);
};

#endif // MYEDIT_H

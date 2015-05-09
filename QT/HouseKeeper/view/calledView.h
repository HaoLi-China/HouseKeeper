#ifndef CALLEDVIEW_H
#define CALLEDVIEW_H

#include <QDialog>
#include "ui_calledView.h"
#include "serialPort.h"
#include "userListCL.h"

class CalledView:public QDialog,public Ui::CalledView
{
Q_OBJECT
public:
CalledView( QWidget* parent = 0, int _fd = 0);
~CalledView();

public:
void setNum(QString num);
void stopTimer();

//定义槽函数
private slots:
void reject();
void accept();
void updateTime();

private:
int fd;//串口文件描述符
QTimer *timer;
int time;
UserListCL *userListCL;
QPixmap face;
QPixmap background;
};
#endif

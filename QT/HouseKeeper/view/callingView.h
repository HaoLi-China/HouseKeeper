#ifndef CALLINGVIEW_H
#define CALLINGVIEW_H

#include <QDialog>
#include "ui_callingView.h"
#include "serialPort.h"
#include "userListCL.h"
#include "gprs.h"

class CallingView:public QDialog,public Ui::CallingView
{
Q_OBJECT
public:
CallingView( QWidget* parent = 0,Gprs *gprs=0);
~CallingView();
public:
void setNum(QString num);

//定义槽函数
private slots:
void hangUP();
void updateTime();

private:
int fd;//串口文件描述符
QTimer *timer;
int time;
Gprs *gprs;
UserListCL *userListCL;
QPixmap background;
QPixmap face;
};
#endif

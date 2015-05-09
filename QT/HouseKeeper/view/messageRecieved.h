#ifndef MESSAGERECIEVED_H
#define MESSAGERECIEVED_H

#include <QDialog>
#include "ui_messageRecieved.h"
#include "messageView.h"
#include "gprs.h"
#include "userListCL.h"

class MessageRecieved:public QDialog, public Ui::MessageRecieved{

Q_OBJECT

public:
MessageRecieved(QWidget *parent=0,Gprs *gprs=0,QString strNum="",QString strMsgContent="");
~MessageRecieved();

public:
void setNum(QString num);
void init();

//定义槽函数，分别对应消息界面的各个按钮
private slots:
void reply();

private:
Gprs *gprs;
UserListCL *userListCL;
QString phoneNum;
QPixmap background;
};

#endif

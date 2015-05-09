#ifndef CONTACTSINFO_H
#define CONTACTSINFO_H

#include <QDialog>
#include "ui_contactsInfo.h"
#include "callingView.h"
#include "messageView.h"
#include "gprs.h"

class ContactsInfo:public QDialog,public Ui::ContactsInfo
{
Q_OBJECT
public:
ContactsInfo(QWidget* parent = 0,Gprs *gprs=0);
~ContactsInfo();

public:
void setInfo(QString name,QString phoneNum);

//定义槽函数
private slots:
void call();
void send();

private:
Gprs *gprs;
int fd;
QPixmap background;
};
#endif

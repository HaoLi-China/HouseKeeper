#ifndef MESSAGEVIEW_H
#define MESSAGEVIEW_H

#include <QDialog>
#include "ui_messageView.h"
#include "gprs.h"
#include "keyboard.h"
#include "contactsView.h"

class MessageView:public QDialog,public Ui::MessageView
{
Q_OBJECT
public:
MessageView( QWidget* parent = 0,Gprs *gprs=0);
~MessageView();

public:
void setPhoneNum(QString phoneNum);
void setContacts(QString contacts);
void init();

private:
QString message;
QString num;
Gprs *gprs;
QPixmap background;

//定义槽函数，分别对应消息界面的各个按钮
private slots:
void clickBackspace();
void clickSpace();
void clickNextLine();
void clickClear();
void clickTextButton();
void clickSend();
void toContactsView();
};
#endif

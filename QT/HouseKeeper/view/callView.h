#ifndef CALLVIEW_H
#define CALLVIEW_H

#include <QDialog>
#include "ui_callView.h"
#include "callingView.h"
#include "serialPort.h"
#include "gprs.h"
#include "digitalKeyboard.h"
#include "contactsView.h"

class CallView:public QDialog,public Ui::CallView
{
Q_OBJECT
public:
CallView(QWidget* parent = 0,Gprs *gprs=0);
~CallView();

public:
   void init();

private:
QString str;

//定义槽函数，分别对应拨号界面的各个按钮
private slots:
void clickTextButton();
void clickCall();
void clickSpace();
void clickBack();
void clickClear();
void toContactsView();

private:
 Gprs *gprs;
 int fd;
QPixmap background;
};
#endif

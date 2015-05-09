#ifndef PHONEVIEW_H
#define PHONEVIEW_H

#include <QWidget>
#include "ui_phoneView.h"
#include "callView.h"
#include "messageView.h"
#include "messageRecieved.h"
#include "usersetview.h"
#include "contactsView.h"
#include "msgBookView.h"
#include "gprs.h"

class PhoneView : public QWidget, public Ui::PhoneView
{
Q_OBJECT
public:
PhoneView(QWidget* parent = 0,Gprs *grs=0);
~PhoneView();

void ReadMsg(QString strRecv);
void init();

private slots:
void openCallView();
void openMessageView();
void openUserSetView();
void openContactsView();
void openMsgBookView();

private:
Gprs *gprs;

QPixmap background,callIcon,userSetIcon,contactsIcon,messageIcon,msgBookIcon;
};

#endif

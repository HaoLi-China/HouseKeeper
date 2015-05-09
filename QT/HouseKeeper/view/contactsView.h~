#ifndef CONTACTSView_H
#define CONTACTSView_H

#include <QDialog>
#include "ui_contactsView.h"
#include "userListCL.h"
#include "addConDialog.h"
#include "userListCL.h"
#include "contactsInfo.h"
#include "gprs.h"

class ContactsView:public QDialog,public Ui::ContactsView
{
Q_OBJECT
public:
ContactsView(QWidget* parent = 0,Gprs *gprs=0);
~ContactsView();

public:
void readList();
void init();

//定义槽函数，分别对应联系人界面的各个按钮
private slots:
void addContacts();
void deleteContacts();
void showInfo(QListWidgetItem *item);

private:
UserListCL *userListCL;
Gprs *gprs;
QPixmap background;
};
#endif

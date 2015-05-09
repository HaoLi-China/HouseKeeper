#ifndef USERSETVIEW_H
#define USERSETVIEW_H

#include <QDialog>
#include "ui_usersetview.h"
#include "gprs.h"
#include "userListCL.h"
#include "addUserDialog.h"

class UserSetView:public QDialog, public Ui::UserSetView{

Q_OBJECT

public:
UserSetView(QWidget *parent=0,Gprs *gprs=0);
~UserSetView();

void init();

//定义槽函数，分别对应消息界面的各个按钮
private slots:
void addUser();
void deleteUser();

private:
void readList();//读user文本文件

private:
Gprs *gprs;
UserListCL *userListCL;
QPixmap background;
};

#endif

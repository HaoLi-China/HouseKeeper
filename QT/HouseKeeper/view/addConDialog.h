#ifndef ADDCONDIALOG_H
#define ADDCONDIALOG_H

#include <QDialog>
#include "ui_addConDialog.h"
#include "keyboard.h"

class AddConDialog : public QDialog, public Ui::AddContacts
{
    Q_OBJECT

public:
    AddConDialog(QWidget *parent = 0);
    ~AddConDialog();

public:
QString getPnoneNum();
QString getName();

private:
QString name;
QString phoneNum;
QPixmap background;

//定义槽函数，分别对应消息界面的各个按钮
private slots:
void clickBackspace();
void clickTextButton();
void clickSpace();
void clickNextLine();
void clickClear();
};

#endif

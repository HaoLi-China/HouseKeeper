#ifndef CHANGEPASSWD_H
#define CHANGEPASSWD_H

#include <QWidget>
#include "ui_changepasswd.h"
#include "database.h"
#include "myedit.h"

class ChangePasswd : public QWidget, public Ui::ChangePasswd
{
    Q_OBJECT

public:
    explicit ChangePasswd(QWidget *parent = 0,DataBase *db=0);
    ~ChangePasswd();

public slots:
    void slot_showKeyboard(MyEdit*);
    void slot_commit();
    void slot_cancel();

public:
    void init();

private:
    DataBase *database;
    MyEdit *oldPwdEdit;
    MyEdit *newPwdEdit;
    MyEdit *confirmEdit; 
    QString oldPwd;
    QString newPwd;
    QString confirmPwd;
 QPixmap background;
};

#endif // CHANGEPASSWD_H

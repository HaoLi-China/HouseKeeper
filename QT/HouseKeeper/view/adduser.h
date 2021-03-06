#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>
#include "ui_adduser.h"
#include "database.h"
#include "myedit.h"

class AddUser : public QWidget, public Ui::AddUser
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = 0,DataBase *db=0,QString ut="");
    ~AddUser();

public slots:
    void slot_showKeyboard(MyEdit*);
    void slot_commit();
    void slot_cancel();

public:
    void init();

private:
    DataBase *database;
    MyEdit *userNameEdit;
    MyEdit *pwdEdit;
    MyEdit *confirmEdit; 
    QString username;
    QString pwd;
    QString confirmPwd;
    QString userType;
    QPixmap background;
};

#endif // ADDUSER_H

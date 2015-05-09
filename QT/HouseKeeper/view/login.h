#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "mainview.h"
#include "ui_login.h"
#include "database.h"
#include "zigbee.h"
#include "gprs.h"
#include "myedit.h"

class Login : public QWidget, public Ui::Login
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0,DataBase *db=0,ZigBee *zb=0,Gprs *grs=0);
    ~Login();

public: 
    void toMainView();

public slots:
    void slot_login();
    void slot_reset();
    void slot_showKeyboard(MyEdit*);

private:
    MainView *mainview;
    DataBase *database;
    ZigBee *zigBee; 
    Gprs *gprs;
    QString username;
    QString pwd;
    MyEdit *nameEdit;
    MyEdit *pwdEdit;
    QPixmap loginIcon,rstIcon,loginBack,background;
};

#endif // LOGIN_H

#ifndef ADDORDELVIEW_H
#define ADDORDELVIEW_H

#include <QWidget>
#include "adduser.h"
#include "deleteuser.h"
#include "changepasswd.h"
#include "ui_addordelview.h"
#include "database.h"

class AddOrDelView : public QWidget, public Ui::AddOrDelView
{
    Q_OBJECT

public:
    explicit AddOrDelView(QWidget *parent = 0,DataBase *db=0,QString ut="");
    ~AddOrDelView();
public slots:
    void slot_toAddUser();
    void slot_toDeleteUser();

public:
    void init();

private:
    DataBase *database; 
    QString userType;

 QPixmap background,addIcon,delIcon;
};

#endif // ADDORDELVIEW_H

#ifndef DELETEUSER_H
#define DELETEUSER_H

#include <QWidget>
#include "ui_deleteuser.h"
#include "database.h"

class DeleteUser : public QWidget, public Ui::DeleteUser
{
    Q_OBJECT

public:
    explicit DeleteUser(QWidget *parent = 0,DataBase *db=0,QString ut="");
    ~DeleteUser();

public:
    void readUser(QString type);
    void init();

public slots:
    void slot_delete();

private:
    DataBase *database;
    QString userType;
 QPixmap background;
};

#endif // DELETEUSER_H

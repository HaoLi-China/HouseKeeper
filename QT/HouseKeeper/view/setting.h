#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include "adduser.h"
#include "deleteuser.h"
#include "changepasswd.h"
#include "addordelview.h"
#include "ui_setting.h"
#include "database.h"

class Setting : public QWidget, public Ui::Setting
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = 0,DataBase *db=0);
    ~Setting();

public slots:
    void slot_toRemote();
    void slot_toWebUser();
    void slot_toChangePasswd();

public:
    void init();

private:
DataBase *database;
 QPixmap background,managerIcon,webUserIcon,remoteIcon;
};

#endif // SETTING_H

#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QWidget>

#include "environment.h"
#include "about.h"
#include "help.h"
#include "setting.h"
#include "phoneview.h"
#include "locationview.h"
#include "safesetting.h"
#include "ui_mainview.h"
#include "database.h"
#include "zigbee.h"
#include "gprs.h"

class MainView : public QWidget, public Ui::MainView
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = 0,DataBase *db=0,ZigBee *zb=0,Gprs *grs=0);
    ~MainView();

signals:
    void signal_timeUpdated();

public slots:
    void slot_showMonitor();
    void slot_showServices();
    void slot_showSetting();
    void slot_showOthers(); 
    void slot_updateTime();

    void slot_toEnvironment();
    void slot_toAbout();
    void slot_toHelp();
    void slot_toSetting();
    void slot_toPhoneView();
    void slot_toLocationView();
    void slot_toSafeSetting();
    void slot_setSafeFlag(bool);

private:
    QTimer *timer;
    DataBase *database;
    ZigBee *zigBee;
    Gprs *gprs;
 bool safeSettingFlag;
    QPixmap background,monitorIcon,serviceIcon,settingIcon,otherIcon,frameBack1,frameBack2,phoneIcon,entIcon,envIcon,locationIcon,safeIcon,accountIcon,aboutIcon,helpIcon;
};

#endif // MAINVIEW_H

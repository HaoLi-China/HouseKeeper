#ifndef LOCATIONVIEW_H
#define LOCATIONVIEW_H

#include <QWidget>
#include <QTimer>
#include "ui_locationview.h"
#include "gps.h"
#include "database.h"
#include "myedit.h"

class LocationView:public QWidget,public Ui::LocationView
{
Q_OBJECT
public:
LocationView(QWidget* parent = 0,DataBase *db=0);
~LocationView();

public:
void init();

//定义槽函数
private slots:
void updateInfo();
void timerStart(bool);
void setMark();
void slot_getNewLocation(QString);
void slot_showKeyboard(MyEdit*);

private:
Gps *gps;
QTimer *timer1;
QTimer *timer2;
GPS_INFO gps_info;
DataBase *database;
bool flag1,flag2,isLocationChanged;
QMap<QString,QString> map; //定义一个QMap对象
QPixmap background;  
MyEdit *myLatitudeArea;
MyEdit *myLongitudeArea;
QWebFrame *frame;
};
#endif

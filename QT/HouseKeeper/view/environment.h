#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <QWidget>
#include "ui_environment.h"
#include "database.h"
#include "zigbee.h"
#include "struct.h"
#include "envplot.h"

class Environment : public QWidget, public Ui::Environment
{
Q_OBJECT

public:
explicit Environment(QWidget *parent = 0,DataBase *db=0,ZigBee *zb=0);
    ~Environment();

public:
void initArray();
void initTable();
void init();

public slots:
    //void slot_showSensorInfo();
    void slot_showHumiture();
    void slot_showGraph();
    void slot_showTable();
    void slot_updateTime();

        void slot_people();
        void slot_nopeople();
        void slot_smoke();
        void slot_nosmoke();
	void slot_hum(double);
	void slot_tem(double);
	void slot_thNotWork();
	void slot_plNotWork();
	void slot_skNotWork();

    void timeout_slot();

private:
DataBase *database;
ZigBee *zigBee;
ZIGBEE_INFO zigbee_info;
CpuPlot *qwtPlot;

  QTimer *timer;
  QString qheader[13];
  QString sensorNum[3];
  QString sensorId;

 QPixmap background;
 //QPixmap tabBg;
};

#endif // ENVIRONMENT_H

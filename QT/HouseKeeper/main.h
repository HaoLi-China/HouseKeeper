#ifndef MAIN_H
#define MAIN_H

#include <QObject>
#include "database.h"

class Main: public QObject
{
Q_OBJECT

public:
Main(DataBase *database);
~Main();

signals:
//void hasGetHum(double hum);
//void hasGetTem(double tem);

private slots:
//void showSensorInfo();
void slot_getNewCon(int);

private:
DataBase *database;
};

#endif

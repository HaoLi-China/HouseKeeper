#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QStringList>
#include <QSqlDatabase>
#include <QSqlDriver>
#include "struct.h"

class DataBase : public QObject
{
        Q_OBJECT
        public:
           DataBase();
           ~DataBase();
        
        signals:
           void signal_getNewLocation(QString msg);
	public:
           bool userChecked(QString name,QString pwd,QString type);
           bool userUpdate(QString name,QString pwd,QString id);
           bool userUpdate(QString name,QString pwd);
           bool addUser(QString name,QString pwd,QString id);
           bool hasUser(QString name);
           bool deleteUser(QString name);
           QStringList readUserList(QString id);
           void insertLocation(QString name,QString latitude,QString longitude);
           QString queryLocation(QString name);
        public slots:
           void slot_insert(ZIGBEE_INFO info);
           QStringList slot_query(QString sensorNum,QString sensorID);
           void slot_getNewLocation(QString msg);
        private:
           QSqlDatabase db;
};

#endif // DATABASE_H

#ifndef ZIGBEE_H
#define ZIGBEE_H

#include <QObject>
#include <QTimer>
#include "posix_qextserialport.h"
#include "struct.h"
#include "database.h"
#include "gprs.h"
#include "userListCL.h"

class ZigBee:public QObject
{
Q_OBJECT
public:
    ZigBee(DataBase *database,Gprs *grs=0);
    ~ZigBee();

public:
	void readMsg(QString msg);
        ZIGBEE_INFO getZigBeeInfo();
	void setPreZigBeeInfo(ZIGBEE_INFO info,int id);
	void initZigBee();
        void setSafeSetting(bool flag);

signals:
        //void hasGotInfo();
        void signal_insert(ZIGBEE_INFO info);
        void signal_query(QString sensorNum,QString sensorID);
        void signal_people();
        void signal_nopeople();
        void signal_smoke();
        void signal_nosmoke();
	void signal_hum(double);
	void signal_tem(double);
	void signal_thNotWork();
	void signal_plNotWork();
	void signal_skNotWork();

private slots:
    	void timeout_slot();

private:
        DataBase *database;	
        QByteArray buff;
        Posix_QextSerialPort *myCom;
        QTimer *timer;
        int ITIME;
        ZIGBEE_INFO zigbee_info;
        ZIGBEE_INFO pre_smoke_info;
	ZIGBEE_INFO pre_people_info;
	ZIGBEE_INFO pre_hat_info;
        int count;
        Gprs *gprs;
        UserListCL *userListCL;
        int temAndHumCount;
        int peopleCount;
        int smokeCount;
        bool firstOpenSmoke;
        bool firstOpenPeople;
        bool firstOpenHAT;
        bool sendTemWarning;
        bool sendHumWarning;
        bool sendSmokeWarning;
        bool sendPeopleWarning;
        bool isSafeSettingOpen;
};
#endif

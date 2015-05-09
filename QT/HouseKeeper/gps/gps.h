#ifndef GPS_H
#define GPS_H

#include <QObject>
#include <QTimer>
#include "serialPort.h"
#define PI 3.141592654
#define R 6371.004

        struct TIME{
	int year;  
	int month; 
	int day;
	int hour;
	int minute;
	int second;
	};

         struct GPS_INFO{
	 TIME time;//时间
	 QString status;  		//接收状态
	 double	latitude;   //纬度
	 double longitude;  //经度
	 QString NS;           //南北极
	 QString EW;           //东西
	 double speed;      //速度
	 double high;       //高度
	};


class Gps:public QObject
{
Q_OBJECT
public:
    Gps();
    ~Gps();

public:
	void readMsg(QString msg);
        void UTC2BTC(TIME time);
        GPS_INFO getGpsInfo();
	void initGPS();
        void resetBuff();
	double getLineDistance(double latitude0, double longitude0, double latitude1, double longitude1);
	double getArcDistance(double latitude0, double longitude0, double latitude1, double longitude1);
	double DM2D(double dm);

private slots:
    	void timeout_slot();

private:
	int fd;	
     	char buff[1024];
        QTimer *timer;
        int ITIME;
        GPS_INFO gps_info;
};
#endif

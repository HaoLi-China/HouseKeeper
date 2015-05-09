#include <QtGui>
#include "gps.h"

//构造函数
Gps::Gps(){
ITIME=1000;
fd=0;//串口文件描述符

initGPS();
}

//析构函数
Gps::~Gps()
{

}

//初始化系统
void Gps::initGPS()
{	
        //打开和设置端口
	if(fd==0)
	{
		if((fd=SerialPort::open_port(2))<0){
                QMessageBox::warning(0, tr("Warning:"),
                                  tr("Open port error!"));
               		 return; 
        	}

	        if((SerialPort::set_opt(fd,4800,8,'N',1))<0){
        	QMessageBox::warning(0, tr("Warning:"),
                                  tr("Sstatuset port error!"));
                	return;
		}
	}

		resetBuff();//给buff清零


                //设置定时器
		timer = new QTimer;
                timer->start(ITIME);
		connect( timer, SIGNAL(timeout()), this, SLOT(timeout_slot()) );

}

//读取串口消息并分析
void Gps::readMsg(QString msg){
QStringList strl = msg.split("\n");
for(int i=0;i<strl.count();i++){
QString str=static_cast<QString>(strl.at(i));
QString flag=str.mid(5,1);
if(flag.compare("C")==0){//"GPRMC"
QStringList field = msg.split(",");
QString qutcTime=static_cast<QString>(field.at(1));
QString qstatus=static_cast<QString>(field.at(2));
QString qlatitude=static_cast<QString>(field.at(3));
QString qNS=static_cast<QString>(field.at(4));
QString qlongitude=static_cast<QString>(field.at(5));
QString qEW=static_cast<QString>(field.at(6));
QString qspeed=static_cast<QString>(field.at(7));
QString qutcDate=static_cast<QString>(field.at(9));

qDebug()<<qutcTime+"1";
qDebug()<<qstatus+"2";
qDebug()<<qlatitude+"3";
qDebug()<<qNS+"4";
qDebug()<<qlongitude+"5";
qDebug()<<qEW+"6";
qDebug()<<qspeed+"7";
qDebug()<<qutcDate+"8";

bool ok;
gps_info.time.hour=qutcTime.mid(0,2).toInt(&ok,10);
gps_info.time.minute=qutcTime.mid(2,2).toInt(&ok,10);
gps_info.time.second=qutcTime.mid(4,2).toInt(&ok,10);
gps_info.time.day=qutcDate.mid(0,2).toInt(&ok,10);
gps_info.time.month=qutcDate.mid(2,2).toInt(&ok,10);
gps_info.time.year=qutcDate.mid(4,2).toInt(&ok,10);		
		
gps_info.status	  =qstatus;
gps_info.latitude =DM2D(qlatitude.toDouble());
gps_info.NS       =qNS;
gps_info.longitude=DM2D(qlongitude.toDouble());
gps_info.EW       =qEW;
gps_info.speed    =qspeed.toDouble();
	               }
if(flag.compare("A")==0){ //"$GPGGA"
QStringList field = msg.split(",");
QString qhigh=static_cast<QString>(field.at(9));

gps_info.high = qhigh.toDouble();		
			}
}
}

//定时器触发（从串口读取数据）
void Gps::timeout_slot()
{
	if(fd)
    	{ 
		if(read(fd,buff,sizeof(buff))!=0)
		{  
                        qDebug()<<QString(buff);
	       		readMsg(QString(buff));
			resetBuff();
		}
	}	
}

//给buff清零
void Gps::resetBuff(){
memset(buff,0,sizeof(buff));
}

//将世界时转换为北京时
void Gps::UTC2BTC(TIME time)
{
//***************************************************
//如果秒号先出,再出时间数据,则将时间数据+1秒
		time.second++; //加一秒
		if(time.second>59){
			time.second=0;
			time.minute++;
			if(time.minute>59){
				time.minute=0;
				time.hour++;
			}
		}	


		time.hour+=8;
		if(time.hour>23)
		{
			time.hour-=24;
			time.day+=1;
			if(time.month==2 ||
			   		time.month==4 ||
			   		time.month==6 ||
			   		time.month==9 ||
			   		time.month==11 ){
				if(time.day>30){
			   		time.day=1;
					time.month++;
				}
			}
			else{
				if(time.day>31){
			   		time.day=1;
					time.month++;
				}
			}
			if(time.year % 4 == 0 ){
		   		if(time.day > 29 && time.month ==2){
		   			time.day=1;
					time.month++;
				}
			}
			else{
		   		if(time.day>28 &&time.month ==2){
		   			time.day=1;
					time.month++;
				}
			}
			if(time.month>12){
				time.month-=12;
				time.year++;
			}		
		}
}

//得到GPS信息
GPS_INFO Gps::getGpsInfo(){
UTC2BTC(gps_info.time);
return gps_info;
}

//根据两地“经纬度”求两地的直线距离
double Gps::getLineDistance(double latitude0, double longitude0, double latitude1, double longitude1)
{
	double difLongitude = longitude0 - longitude1;//两地经度差

	//将角度转化为弧度
	longitude0 = longitude0 * PI / 180;
	longitude1 = longitude1 * PI / 180;
	difLongitude = difLongitude * PI / 180;
	
	//k中间变量
	double k = 0;//k=√((sin⁡θ-sin⁡α )^2+(cos⁡θ-cos⁡α*cos⁡β )^2+(cos⁡α*sin⁡β )^2
	double lineDistance = 0;//a,b两地的直线距离（地球的一条弦长）	L=rk

	k = sqrt(pow(sin(latitude1) - sin(latitude0), 2) + pow((cos(latitude1) - cos(latitude0)*cos(difLongitude)), 2) + pow((cos(latitude0) * sin (difLongitude)), 2));

	lineDistance = R * k;
	return lineDistance;
}

//根据两地“经纬度”求两地的弧线距离
double Gps::getArcDistance(double latitude0, double longitude0, double latitude1, double longitude1)
{
	//double difLongitude = longitude0 - longitude1;//两地经度差
	
	//将角度转化为弧度
        latitude0 = latitude0 * PI / 180;
        latitude1 = latitude1 * PI / 180;
	longitude0 = longitude0 * PI / 180;
	longitude1 = longitude1 * PI / 180;
	//difLongitude = difLongitude * PI / 180;

	//k中间变量
	double k = 0;//k=√((sin⁡θ-sin⁡α )^2+(cos⁡θ-cos⁡α*cos⁡β )^2+(cos⁡α*sin⁡β )^2
	double arcDistance = 0;//两地的球面距离（沿地球表面的弧长）	l=2r sin^(-1)⁡〖k/2〗

	//k = sqrt(pow(sin(latitude1) - sin(latitude0), 2) + pow((cos(latitude1) - cos(latitude0)*cos(difLongitude)), 2) + pow((cos   (latitude0) * sin (difLongitude)), 2));
        k=acos(cos(longitude0-longitude1)*cos(latitude0)*cos(latitude1)+sin(latitude0)*sin(latitude1));

	arcDistance = R * k;
	return arcDistance;
}

//ddmm.mmmm(度分格式)转化为度
double Gps::DM2D(double dm){
double d;
int i=(int)dm/100;
d= (dm-i*100)/60+i;
return d;
}


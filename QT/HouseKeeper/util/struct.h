#ifndef STRUCT_H
#define STRUCT_H

struct ZIGBEE_INFO{
	 QString netFlag;    //网络标识
	 QString pointAddr;  //节点地址
	 QString rootAddr;   //根节点地址
	 QString pointState; //节点状态
	 QString pointWay;   //节点通道
	 QString port;       //通信端口
	 QString sensorNum;  //传感器类型编号
	 QString sensorID;   //相同类型传感器ID
	 QString commandNum; //节点命令序号
	 QString pointData;  //节点数据
	};
#endif

#ifndef _SERIAL_H_
#define _SERIAL_H_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>
#include <errno.h>
/*
该类用于打开串口，设置串口相应设置参数，以及向串口写入一定长度的数据
*/
class SerialPort
{
public:
    SerialPort();
    ~SerialPort();
public:
	static int set_opt(int fd,int nSpeed, int nBits, char nEvent, int nStop);
	static int open_port(int comport);
	static int nwrite(int serialfd,const char *data,int datalength);
};
#endif


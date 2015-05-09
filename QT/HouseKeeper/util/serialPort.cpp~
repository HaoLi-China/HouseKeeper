#include "serialPort.h"
#define COM1 "/dev/ttySAC1"
#define COM2 "/dev/ttySAC3"

//构造函数
SerialPort::SerialPort( )
{
}

//析构函数
SerialPort::~SerialPort()
{

}

//设置选项
int SerialPort::set_opt(int fd,int nSpeed, int nBits, char nEvent, int nStop)
{
	struct termios newtio,oldtio;

        //获得端口当前设置选项
	if  ( tcgetattr( fd,&oldtio)  !=  0) { 
		perror("SetupSerial 1");
		return -1;
	}

	bzero( &newtio, sizeof( newtio ) );
	newtio.c_cflag  |=  CLOCAL | CREAD; 
	newtio.c_cflag &= ~CSIZE; 
//	newtio.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
//	newtio.c_oflag &= ~OPOST;
	
        //设置比特率
        switch( nSpeed )
	{
	case 2400:
		cfsetispeed(&newtio, B2400);
		cfsetospeed(&newtio, B2400);
		break;
	case 4800:
		cfsetispeed(&newtio, B4800);
		cfsetospeed(&newtio, B4800);
		break;
	case 9600:
		cfsetispeed(&newtio, B9600);
		cfsetospeed(&newtio, B9600);
		break;
	case 115200:
		cfsetispeed(&newtio, B115200);
		cfsetospeed(&newtio, B115200);
		break;
	default:
		cfsetispeed(&newtio, B9600);
		cfsetospeed(&newtio, B9600);
		break;
	}
        
        //设置字符大小
        switch( nBits )
	{
	case 7:
		newtio.c_cflag |= CS7;
		break;
	case 8:
		newtio.c_cflag |= CS8;
		break;
	}

        //设置奇偶校验位
	switch( nEvent )
	{
	case 'O':
		newtio.c_cflag |= PARENB;
		newtio.c_cflag |= PARODD;
		newtio.c_iflag |= (INPCK | ISTRIP);
		break;
	case 'E': 
		newtio.c_iflag |= (INPCK | ISTRIP);
		newtio.c_cflag |= PARENB;
		newtio.c_cflag &= ~PARODD;
		break;
	case 'N':  
		newtio.c_cflag &= ~PARENB;
		break;
	}

        //设置停止位
	if( nStop == 1 ){
	newtio.c_cflag &=  ~CSTOPB;
}
	else if ( nStop == 2 ){
	newtio.c_cflag |=  CSTOPB;
}

	newtio.c_cc[VTIME]  = 0;
	newtio.c_cc[VMIN] = 0;
	tcflush(fd,TCIFLUSH);

        //设置端口新的设置选项
	if((tcsetattr(fd,TCSANOW,&newtio))!=0)
	{
		perror("com set error");
		return -1;
	}
	return 0;
}

//打开端口
int SerialPort::open_port(int comport)
{
        int fd=0;
	if (comport==1)
	{	fd = open( COM1, O_RDWR|O_NOCTTY|O_NDELAY);
		if (-1 == fd){
			perror("Can't Open Serial COM1");
			return(-1);
		}
	}
	else if(comport==2)
	{	fd = open( COM2, O_RDWR|O_NOCTTY|O_NDELAY);
		if (-1 == fd){
			perror("Can't Open Serial COM2");
			return(-1);
		}
	}
	
	if(fcntl(fd, F_SETFL, 0)<0)
		perror("fcntl failed!");
	if(isatty(STDIN_FILENO)==0)
		perror("standard input is not a terminal device");
	return fd;
}

//向端口写入数据（反复写入直到写完所有数据）
int SerialPort::nwrite (int serialfd, const char *data, int datalength )
{
    int len = 0, total_len = 0;
    for (total_len = 0 ; total_len < datalength;) 
    {
	len = 0;
	len = write(serialfd, &data[total_len], datalength - total_len);
        if (len > 0) 
            total_len += len;          
   }
    return (total_len);
}

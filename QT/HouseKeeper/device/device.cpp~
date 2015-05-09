#include "device.h"
#include <QtDebug>

//构造函数
Device::Device(){
      fd=-1;
      freq = 1000 ;
}

//析构函数
Device::~Device(){
   qDebug()<<"xigou";
   close_buzzer();
}

//关闭蜂鸣器
void Device::close_buzzer()
{
	if (fd >= 0) {
		ioctl(fd, PWM_IOCTL_STOP);
		if (ioctl(fd, 2) < 0) {
			perror("ioctl 2:");
		}
		close(fd);
		fd = -1;
	}
}

//打开蜂鸣器
void Device::open_buzzer()
{
	fd = open("/dev/pwm",0);
	if (fd < 0) {
		perror("open pwm_buzzer device");
                close_buzzer();
	}

	// any function exit call will stop the buzzer
	//atexit(close_buzzer);
}

//设置蜂鸣器频率
void Device::set_buzzer_freq(int freq)
{
	// this IOCTL command is the key to set frequency
	int ret = ioctl(fd, PWM_IOCTL_SET_FREQ, freq);
	if(ret < 0) {
		perror("set the frequency of the buzzer");
                close_buzzer();
	}
}

//停止蜂鸣器
void Device::stop_buzzer()
{
	int ret = ioctl(fd, PWM_IOCTL_STOP);
	if(ret < 0) {
		perror("stop the buzzer");
                close_buzzer();
	}
	if (ioctl(fd, 2) < 0) {
		perror("ioctl 2:");
	}
}	

//获取频率
int Device::getFreq()
{
	return freq;
}

//设置频率
void Device::setFreq(int fr)
{
	freq=fr;
}

//增加频率
void Device::freqRise()
{
	if( freq < 20000 )
	freq += 100;
}	

//减小频率
void Device::freqDec()
{
	if( freq > 11 )
	freq -= 100 ;
}	

#ifndef DEVICE_H
#define DEVICE_H

#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define PWM_IOCTL_SET_FREQ		1
#define PWM_IOCTL_STOP			0
 
class Device
{
public:
    Device();
   ~Device();
public:
   void close_buzzer();
   void open_buzzer();
   void set_buzzer_freq(int freq);
   void stop_buzzer();
   int getFreq();
   void setFreq(int fr);
   void freqDec();
   void freqRise();
    
private:
   int fd;
   int freq;
};

#endif

#include <iostream>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/kd.h>
#include <unistd.h>
#include "beep.h"

void Beep::beep(int freq,int len){
	int fd = open("/dev/tty5", O_WRONLY);
	ioctl (fd, KIOCSOUND, (int)(1193180/freq));
	usleep(1000*len);
	ioctl(fd, KIOCSOUND, 0);
	close(fd);	
}

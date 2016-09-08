#include <iostream>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/kd.h>
#include <unistd.h>

namespace Piano{
	const int C1  = 65;
   	const int C1x = 69;
       	const int D1  = 73;
       	const int D1x = 78;
      	const int E1  = 82;
       	const int F1  = 87;
       	const int F1x = 93;
       	const int G1  = 98;
       	const int G1x = 104;
       	const int A1  = 110;
   	const int A1x = 117;
   	const int B1  = 124;
     	const int C2  = 130;
    	const int C2x = 139;
   	const int D2  = 145;
    	const int D2x = 156;
    	const int E2  = 165; //check
    	const int F2  = 177; //check
    	const int F2x = 185;
    	const int G2  = 196;
     	const int G2x = 208;
    	const int A2  = 220;
    	const int A2x = 233;
    	const int B2  = 247;
    	const int C3  = 262;
    	const int C3x = 277;
    	const int D3  = 293;
    	const int D3x = 311;
    	const int E3  = 330;
    	const int F3  = 349;
    	const int F3x = 370;
    	const int G3  = 392;
     	const int G3x = 415;
     	const int A3  = 440;
    	const int A3x = 466;
     	const int B3  = 494;
    	const int C4  = 523;
    	const int C4x = 554;
    	const int D4  = 587;
   	const int D4x = 622;
   	const int E4  = 659;
    	const int F4  = 698;
    	const int F4x = 740;
   	const int G4  = 784;
    	const int G4x = 831;
	void beep(int freq,int len);
}
void Piano::beep(int freq,int len){
	int fd = open("/dev/tty5", O_WRONLY);
        ioctl (fd, KIOCSOUND, (int)(1193180/freq));
        usleep(1000*len);
        ioctl(fd, KIOCSOUND, 0);
        close(fd);
}



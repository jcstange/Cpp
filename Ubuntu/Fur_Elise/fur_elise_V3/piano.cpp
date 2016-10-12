#include<iostream>
#include<string>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/kd.h>
#include <unistd.h>
#include "piano.h"

using namespace std;

const int Piano::getNote(string note){
        cout << note << "; ";
        int i=0;
        while (note != notes[i]){
                i++;
        }
        return freq[i];

}

void Piano::beep(int freq,int len){
        cout << freq << "; " << len << endl;
        int fd = open("/dev/tty5", O_WRONLY);
        ioctl (fd, KIOCSOUND, (int)(1193180/freq));
        usleep(1000*len);
        ioctl(fd, KIOCSOUND, 0);
        close(fd);
}


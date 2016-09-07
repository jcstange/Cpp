#include <iostream>
#include <time.h>
#include "beep.h"

using namespace std;

int main(){
	Beep b;
	unsigned int min(0);
	cout << "How many minutes do you want?" << endl;
	cin >> min;
	cout << "You chosen " 
	     << min 
             << " minutes" << endl;

	clock_t time;
	time = clock();
	long counter = 0;
	while (clock() - time < min*60000000){ 
		clock_t current = clock() - time;
		if (current - counter >= 1000000) {
			counter = clock();
			int remaining = (min*60)-(current/1000000);
			cout << "Remaining Time: " 
			     << (remaining/600)%10
			     << (remaining/60)%10
			     << ":"	
			     << (remaining/10)%6
			     << (remaining%10)
			     << endl;
			if(remaining <=10) b.beep(512,250);
		}
	
	}
	cout << "Your meal is ready!" <<  endl;
        b.beep(1024,2000);
	return(0);
}	

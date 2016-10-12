#include <iostream>
#include <string>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <linux/kd.h>
#include <unistd.h>

using namespace std;

class Piano{
	
        const string notes[45] = {"C1", "C1x", "D1", "D1x", "E1", "F1", "F1x", "G1", "G1x", "A1", "A1x", "B1", "C2", "C2x", "D2", "D2x", "E2", "F2", "F2x", "G2", "G2x", "A2", "A2x", "B2", "C3", "C3x", "D3", "D3x", "E3", "F3", "F3x", "G3", "G3x", "A3", "A3x", "B3", "C4", "C4x", "D4", "D4x", "E4", "F4", "F4x", "G4", "G4x"}; 

	const int freq[45] = {65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 124, 130, 139, 145, 156, 165, 177, 185, 196, 208, 220, 233, 247, 262, 277, 293, 311, 330, 349, 370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831};

	public:
	const int getNote(string note);
	void beep(int freq,int len);
};

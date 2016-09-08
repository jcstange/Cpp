#include <iostream>
#include "beep.h"

using namespace std;

int main(){
	Beep h;
	int C1  = 65;
	int C1x = 69;
	int D1  = 73;
	int D1x = 78;
	int E1  = 82;
	int F1  = 87;
	int F1x = 93;
	int G1  = 98;
	int G1x = 104;
	int A1  = 110;
	int A1x = 117;
	int B1  = 124;
	int C2  = 130;
	int C2x = 139;
	int D2  = 145;
	int D2x = 156;
	int E2  = 165; //check
	int F2  = 177; //check
	int F2x = 185;
	int G2  = 196;
	int G2x = 208;
	int A2  = 220;
	int A2x = 233;
	int B2  = 247;
	int C3  = 262;
	int C3x = 277;
	int D3  = 293;
	int D3x = 311;
	int E3  = 330;
	int F3  = 349;
	int F3x = 370;
	int G3  = 392;
	int G3x = 415;
	int A3  = 440;
	int A3x = 466;
	int B3  = 494;
	int C4  = 523;
	int C4x = 554;
	int D4  = 587;
	int D4x = 622;
	int E4  = 659;
	int F4  = 698;
	int F4x = 740;
	int G4  = 784;
	int G4x = 831;

	//fur_elise - Intro
	h.beep(E3,250); 
	h.beep(D3x,250);
	h.beep(E3,250); 
	h.beep(D3x,250);
	h.beep(E3,250); 
	h.beep(B2,250); 
	h.beep(D3,250);
	h.beep(C3,300);
	h.beep(A2,300);
	//fur_elise - 1st_Arpeggio
	h.beep(A1,250);
	h.beep(E2,250);
	h.beep(A2,250);
	h.beep(C3,250);
	h.beep(E3,250);
//	h.beep(A3,300);
	h.beep(B3,300);
	//fur_elise - 2nd_Arpeggio
        h.beep(E1,250);
        h.beep(E2,250);
        h.beep(G2x,250);
        h.beep(E3,250);
//        h.beep(G3x,250);
        h.beep(B3,250);
	h.beep(C4,300);
	//fur_elise - 3rd_Arpeggio
	h.beep(A1,250);
	h.beep(E2,250);
	h.beep(A2,250);
	h.beep(E3,250);
	// end of first part
        h.beep(20,1000);
        //intro again
        h.beep(E3,250);
        h.beep(D3x,250);
        h.beep(E3,250);
        h.beep(D3x,250);
        h.beep(E3,250);
        h.beep(B2,250);
        h.beep(D3,250);
        h.beep(C3,300);
        h.beep(A2,300);
	//first again
        h.beep(A1,250);
        h.beep(E2,250);
        h.beep(A2,250);
        h.beep(C3,250);
        h.beep(E3,250);
//        h.beep(A3,300);
        h.beep(B3,300);
	//second changed
        h.beep(E2,250);
        h.beep(G2x,250);
        h.beep(E3,250);
        h.beep(C4,250);
        h.beep(B3,250);
	h.beep(A3,1000);
	//end
	return(0);
}

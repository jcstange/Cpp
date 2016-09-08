#include <iostream>
#include "piano.h"

using namespace Piano;

int main(){
		
	//fur_elise - Intro
	beep(E3,250); 
	beep(D3x,250);
	beep(E3,250); 
	beep(D3x,250);
	beep(E3,250); 
	beep(B2,250); 
	beep(D3,250);
	beep(C3,300);
	beep(A2,300);
	//fur_elise - 1st_Arpeggio
	beep(A1,250);
	beep(E2,250);
	beep(A2,250);
	beep(C3,250);
	beep(E3,250);
//	beep(A3,300);
	beep(B3,300);
	//fur_elise - 2nd_Arpeggio
        beep(E1,250);
        beep(E2,250);
        beep(G2x,250);
        beep(E3,250);
//      beep(G3x,250);
        beep(B3,250);
	beep(C4,300);
	//fur_elise - 3rd_Arpeggio
	beep(A1,250);
	beep(E2,250);
	beep(A2,250);
	beep(E3,250);
	// end of first part
        beep(20,1000);
        //intro again
        beep(E3,250);
        beep(D3x,250);
        beep(E3,250);
        beep(D3x,250);
        beep(E3,250);
        beep(B2,250);
        beep(D3,250);
        beep(C3,300);
        beep(A2,300);
	//first again
        beep(A1,250);
        beep(E2,250);
        beep(A2,250);
        beep(C3,250);
        beep(E3,250);
//      h.beep(A3,300);
        beep(B3,300);
	//second changed
        beep(E2,250);
        beep(G2x,250);
        beep(E3,250);
        beep(C4,250);
        beep(B3,250);
	beep(A3,1000);
	//end
	return(0);
}

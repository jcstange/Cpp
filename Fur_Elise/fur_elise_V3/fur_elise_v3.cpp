#include <iostream>
#include <string>
#include "piano.h"

using namespace std;

int main(){
	Piano a;	
	//fur_elise - Intro
	a.beep(a.getNote("E3"),250); 
	a.beep(a.getNote("D3x"),250);
	a.beep(a.getNote("E3"),250); 
	a.beep(a.getNote("D3x"),250);
	a.beep(a.getNote("E3"),250); 
	a.beep(a.getNote("B2"),250); 
	a.beep(a.getNote("D3"),250);
	a.beep(a.getNote("C3"),250);
	a.beep(a.getNote("A2"),250);
	//fur_elise - 1st_Arpeggio
	a.beep(a.getNote("A1"),250);
	a.beep(a.getNote("E2"),250);
	a.beep(a.getNote("A2"),250);
	a.beep(a.getNote("C3"),250);
	a.beep(a.getNote("E3"),250);
	a.beep(a.getNote("B3"),250);
	//fur_elise - 2nd_Arpeggio
        a.beep(a.getNote("E1"),250);
        a.beep(a.getNote("E2"),250);
        a.beep(a.getNote("G2x"),250);
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("B3"),250);
	a.beep(a.getNote("C4"),250);
	//fur_elise - 3rd_Arpeggio
	a.beep(a.getNote("A1"),250);
	a.beep(a.getNote("E2"),250);
	a.beep(a.getNote("A2"),250);
	a.beep(a.getNote("E3"),250);
	// end of first part
        a.beep(20,750);
        //intro again
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("D3x"),250);
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("D3x"),250);
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("B2"),250);
        a.beep(a.getNote("D3"),250);
        a.beep(a.getNote("C3"),250);
        a.beep(a.getNote("A2"),250);
	//first again
        a.beep(a.getNote("A1"),250);
        a.beep(a.getNote("E2"),250);
        a.beep(a.getNote("A2"),250);
        a.beep(a.getNote("C3"),250);
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("B3"),250);
	//second changed
        a.beep(a.getNote("E2"),250);
        a.beep(a.getNote("G2x"),250);
        a.beep(a.getNote("E3"),250);
        a.beep(a.getNote("C4"),250);
        a.beep(a.getNote("B3"),250);
	a.beep(a.getNote("A3"),750);
	//end
	return(0);
}

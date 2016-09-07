#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
	char in(0);
	int tries(0);
	bool game(0);
	int question(1);

	cout << "This game is a math test with 10 questions with the same weight\n" 
	     <<"Press 'y' if you wanna play, otherwise 'n'..." 
	     << endl;
        
	cin >> in;

	while(tries < 4){

		switch (in) {
			case 'n':
				cout << "See you next time!" << endl;
				tries = 4;
				game = false;						
				break;
			case 'y':
				cout << "Okay! Let's the game begin!" <<endl;
				tries = 4;
				game = true;
				break;
			default:
				tries++;
				cout << "No valid option! Yes(y) or No(n)" << endl;
				cin >> in;
		}
	}
	if (game == 1){
		cout << "Welcome to this math game\n" << endl;
		int gamepoint(0);
		while (question < 11){
			int x = rand()%100;
			int y = rand()%100;
			int z = rand()%3;
			int answer(0);
			cout << "Question #" 
		     	     <<  question
		             << ": " 
		     	     << x
			     << " "
			    // << z
			     << "+ "
 			     << y
			     << " = "
			     << endl;
			cin >> answer;
			if (answer == x + y){
				gamepoint = gamepoint + 10;
				cout << "You are right!" << endl;
			} else cout << "You are wrong!" << endl;
			question++;
		}		
		cout << "You ended your test! Your score is " 
		     << gamepoint << endl;

		if (gamepoint == 100) cout << "Congratulations! Flawless victory!" << endl;
		else if (gamepoint == 0) cout << "Sorry! Your should study more!" << endl;
		else cout << "You are getting there!" <<endl;
	} else return(0);
}





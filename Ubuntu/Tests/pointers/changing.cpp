#include <iostream>

using namespace std;

int main() {

	int number = 20;
	
	cout << "Your number is " << number << endl;

	int& Addnumber = number;

	cout << "&Addnumber = number; " << Addnumber << endl; // it proves that a memory address is a int;

/*	Program can't compile *pointer = int;

	int* Ptrnumber = number;

	cout << "*Ptrnumber = number; " << Ptrnumber << endl; //it proves that a pointer is not a int*/

	

}

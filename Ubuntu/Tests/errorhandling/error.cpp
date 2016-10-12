#include <iostream>

using namespace std;

int main(){

	int number = 0;
	int number2 = 0;
	cout<<"Try to divide two numbers, type the first" << endl;
	cin >> number;
	cout<< "Type the second number" <<endl;
	cin >> number2;
	
	try {
	
		if(number2 != 0) {
	
			cout << "1st/2nd = "<< (float)number/number2 << endl;

		} else throw (number2);

	}	
	
	catch (int number2) {
		cout<< number2 << " divisor is not valid" << endl;
	}
}

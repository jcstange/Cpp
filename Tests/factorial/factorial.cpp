#include <iostream>

using namespace std;

int getFactorial(int number){

	int sum;
	if(number==1) sum = 1;
	else sum = getFactorial (number-1) * number;
	return sum;

}


int main() {
	
	int number = 0;
	cout << "What number would you like to know the factorial?"<<endl;
	cin >> number;
	cout<<"The factorial of " 
		<< number << " is " 
		<< getFactorial(number) <<endl;
	return(0);

}


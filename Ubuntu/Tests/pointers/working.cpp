#include <iostream>

using namespace std;

void changeptr (int *number){

	cout << "number is equal to " << *number << endl;
	*number = *number-5;
}

int main() {
	int number = 0;
	cout << "Choose a number " << endl;
	cin >> number;

	changeptr(&number);
	
	cout << "Now your number is " << number << endl;

	return(0);
	

}

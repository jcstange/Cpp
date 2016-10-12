#include <iostream>

using namespace std;

int main(){

	int number = 0;
	char a = 'a';
	int badNums[5]={4,13,14,24,34};
	int* numberptr = &number;
	char* aptr = &a;
	int* numArrayPtr = badNums;

	cout << number << ", size=  " 
		<< sizeof(number) << ", address is= "
		<< &number << ", pointer to address = " 
		<< *numberptr << endl;
	cout << a << ", size=  " 
                << sizeof(a) << ", address is= " 
                << &a << ", pointer to address = " 
		<< *aptr <<endl;

	for(int i=1; i<=(sizeof(badNums)/sizeof(int));i++){
	cout << badNums << ", size=  "
                << (sizeof(badNums)/sizeof(int)) << ", address is= "
                << badNums << ", pointer to address = "
                << *numArrayPtr <<endl;

	numArrayPtr++;
	}   

}
	

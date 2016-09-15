#include <iostream>
#include <array>

using namespace std;
int main(){

	array<int,5> one { {2,4,6,8,10} };
	
	cout << "Printing for(auto) " << endl;
	for(auto& a: one){

		cout << a << endl;
	
	}
	
	cout << "Printing normal for " << endl;
	for (int i=0; i<one.size() ;++i){
	
		cout << one[i] << endl;

	}
	if (one.empty()) cout << "Array is empty" << endl;
	else cout << "Array is not empty. It's size is " << one.size() << endl;
}

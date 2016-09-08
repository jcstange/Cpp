#include <iostream>
#include <initializer_list>
using namespace std;

int main(){
	int v[]={0,1,2,3,4,5,6,7,8,9};
	cout << "first print" << '\n';
	for ( auto  x : v) cout << x << '\n';
	cout << "second print" << '\n';
	for ( auto x : {10,21,32,43,54,65}) cout << x << '\n';
	return(0);
}

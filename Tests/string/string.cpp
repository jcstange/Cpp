#include <iostream>
#include <string>

using namespace std;

int main() {

	string firstname;
	string lastname;
	cout<< "What is your first name?" << endl;
	getline(cin,firstname);
	cout<< "What is your last name?" <<endl;
	getline(cin,lastname);
	string wholename = firstname.append(" ")+lastname;
	cout << "Your whole name is " << wholename << endl;
	cout << "It has " << firstname.size()+lastname.size() << " letters" << endl;
	
	return(0);
}

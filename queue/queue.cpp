#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
	string name;
	char options = 'a';
	queue <string> waiting;
	while (options != ('d')){
	cout << "Waiting list:" << endl << endl;
	cout << "You have " << waiting.size () << " people waiting!" << endl;
	cout << "(a)Check next in the List " << endl;
	cout << "(b)Add a new name " << endl;
	cout << "(c)Someone was called" << endl;
	cout << "(d)Exit" << endl;
	cin >> options;

	switch (options){
		case 'a':
			if(waiting.empty()){
				 cout << "Your list is empty" << endl;
			}
			cout << waiting.front() << endl;
			break;
		case 'b':
			cout << "What is the name: ";
			cin >> name;
			cout << endl;
			waiting.push(name);
			cout << "Name " << name << " was added!" << endl;
			break;
		case 'c':
			if(waiting.empty()){
				 cout << "Your list is empty" << endl;
			} else {
				cout << waiting.front() << " was called" << endl;
				waiting.pop();
			}
			break;
		case 'd':
			break;
		default:
			cout << "It's not an option" << endl;
			break;
	}
	}

}

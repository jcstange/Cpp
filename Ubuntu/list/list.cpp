#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	string name;
	char options = 'a';
	list<string> viplist;
	while (options != ('d')){
        cout << "Waiting list:" << endl << endl;
        cout << "You have " << viplist.size() << " people waiting!" << endl;
        cout << "(a)Check next in the List " << endl;
        cout << "(b)Add a new name " << endl;
        cout << "(c)Someone was called" << endl;
        cout << "(d)Exit" << endl;
        cin >> options;
	switch (options){
                case 'a':
                        if(viplist.empty()){
                                 cout << "Your list is empty" << endl;
                        } else {
			cout << "Your list is: " << endl;
			list<string>::const_iterator i;
			for (i=viplist.begin(); i!=viplist.end();++i){
				cout << *i << endl;
			}
			}
                        break;
                case 'b':
                        cout << "What is the name: ";
                        cin >> name;
                        cout << endl;
                        viplist.push_back(name);
                        cout << "Name " << name << " was added!" << endl;
                        break;
                case 'c':
			bool vip;
			cout << "Is VIP? yes[1] no[0] " << endl;
			cin >> vip;
                        if(viplist.empty()){
                                 cout << "Your list is empty" << endl;
                        } else if (vip) { 
                                cout << viplist.back() << " was called" << endl;
                                viplist.pop_back();
			} else {
				cout << viplist.front() <<" was called" << endl;
				viplist.pop_front();
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
	






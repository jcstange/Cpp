#include<iostream>
#include<vector>

using namespace std;

int main(){
	int option(0);	
	vector<int> stack;
	int size=0;
	while(option!=5){
        int elem(0);
        cout <<"It's a stack, you can:" << endl;
        cout <<" (1)push " << endl;
        cout <<" (2)pop " << endl;
        cout <<" (3)Check size " << endl;
        cout <<" (4)Check stack " << endl;
        cout <<" (5)Exit " << endl;
        cin >> option;

        switch (option){
                case 1:
                        cout << "Type the number: ";
                        cin >> elem;
                        cout << endl;
                        cout << "Your stack is " << endl;
		        stack.push_back(elem);
			size = stack.size();	
			for(int i=0;i<size;++i){
				cout << stack.at(i) << endl;
			}
                        break;
                case 2:
                        cout << "Your stack is " << endl;                       
		        if(stack.empty()){
				 cout << "Stack empty" << endl;
			} else { 
				stack.pop_back();
		      		size = stack.size();
				for (int i=0;i<size;++i){
					cout << stack.at(i) << endl;
				}
			}
                        break;
                case 3:
			cout << "Size is " << stack.size() << endl;
                        break;
                case 4:
                        cout << "Your stack is " << endl;
			size = stack.size();
			for(int i=0;i<size;++i){
				cout << stack.at(i) << endl;
			}
                        
                        break;
                case 5:
                        break;
                default:
                        cout<< "There is no option for that :/"<<endl;
                        break;
                }
        }
        return 0;
}





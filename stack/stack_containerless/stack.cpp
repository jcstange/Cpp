#include <iostream>

using namespace std;

class Stack {
	int base[100];
	int top=0;
	int *stack = new int[top];
	public:
	void Printstack();
	void Pop();
	void Push(int elem);
	int Size();
};

void Stack::Printstack(){
	for(int i=0; i<top; i++){
		cout << stack[(top-1)-i] << endl;
	}
}
void Stack::Pop(){
	if(top>0){	
		top--;
		for(int i=0; i<top; i++){
			stack[i]=base[i];
		}
		for(int i=0; i<top; i++){			
			cout << stack[(top-1)-i] << endl;
		}
	} else cout << "Stack is empty!" << endl;
}
void Stack::Push(int elem){
	top++;
	base[top-1] = elem;
	for(int i=0; i<top; i++){
		stack[i]=base[i];
	}

	for(int i=0; i<top; i++){			
		cout << stack[(top-1)-i] << endl;
	}
}


int Stack::Size(){
	return top ;
}


int main(){
	Stack a;
	int option(0);	
	while(option!=5){
	int elem(0);
	cout << "It's a stack, you can: \n" 
	<<" (1)push \n" 
	<<" (2)pop \n" 
	<<" (3)Check size \n"
	<<" (4)Check stack \n" 
	<<" (5)Exit " << endl;
	cin >> option;
	
	switch (option){
		case 1:
			cout << "Type the number: ";
			cin >> elem;
			cout << endl;
			cout << "Your stack is " << endl;
			a.Push(elem);
			break;
		case 2:
			cout << "Your stack is " << endl;
			a.Pop();
			break;
		case 3:
			cout << "Size is " << a.Size() << endl;			
			break;
		case 4:
			cout << "Your stack is " << endl;
			a.Printstack();
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



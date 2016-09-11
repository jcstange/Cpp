#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
	string letter;
	string filename;
	cout<<"What do you want to write?"<<endl;
	getline(cin,letter);
	cout<<"In which file would you like to append this?"<<endl;
	getline(cin,filename);
	ofstream writer(filename,ios::app);
	if (!writer) { 
		cout<<"File not open"<<endl;
		return -1;
	} else {
		writer<<letter<<endl;
		writer.close();
	}

	char l;
	ifstream reader(filename);
	if(!reader){
		cout<<"File can't be open"<<endl;
		return -1;
	}else{
		for (int i=0;!reader.eof();i++){
			reader.get(l);
			cout<<l;
		}
	cout << endl;
	reader.close();
	}
}

			



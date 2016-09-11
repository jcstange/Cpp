#include <iostream>
#include <string>

using namespace std;

class Animal {

	public:
		void getFamily() { cout << "We are animals" << endl;}
		virtual void getClass(){ cout << "I'm an Animal" << endl;}
};

class Dog : public Animal {
	public:
		void getClass(){cout<<"I'm a Dog" << endl;}

};

class GermanShepard : public Dog {
	public:
		void getClass() {cout<<"I'm a German Shepard"<<endl;}
		void getDerived(){cout<<"I'm an animal and a dog" << endl;}

};

void whatClassAreYou (Animal *animal){

	animal -> getClass();

}

int main(){

	Animal *animal = new Animal;
	Dog *dog = new Dog;

	animal -> getClass();
	dog -> getClass();

	whatClassAreYou(animal);
	whatClassAreYou(dog);

	Dog spot;
	GermanShepard max;

	Animal* ptrDog = &spot;
	Animal* ptrGShepard = &max;

	ptrDog -> getFamily();
	ptrDog -> getClass();

	ptrGShepard -> getFamily();
	ptrGShepard -> getClass();
	return(0);

}

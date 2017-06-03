#include <iostream>
#include <string>

using namespace std;

class Animal
{

	public:
		void getFamily(){ cout << "We are animals" << endl; }
		virtual void getClass() { cout << "I'm an Animal." << endl; } //virtual and without virtual

};

class Dog: public Animal
{

	public:
		void getClass() { cout << "I'm a Dog" << endl; }
};

class GermanShepard : public Dog
{
	public:
		void getClass() { cout << "I'm a German Shepard" << endl; }
		void getDerived() { cout << "I'm an Animal and Dog" << endl; }

};

void whatClassAreYou(Animal *animal)
{
	animal-> getClass(); // when we call this if we use virtual it goes to right method if we don't use it (always get getClass() of animal

}

int main()
{
	Animal *animal = new Animal;
	Dog *dog = new Dog;


	animal->getClass();
	dog->getClass();

	whatClassAreYou(animal);
	whatClassAreYou(dog);

	cout << "\n****\n";

	Dog spot;
	GermanShepard max;

	Animal* ptrDog = &spot;
	Animal* ptrGShepard = &max;

	ptrDog-> getFamily();

	ptrDog-> getClass(); //it uses right method not animal method

	cout << "\n****\n";

	ptrGShepard-> getFamily();

	ptrGShepard-> getClass();
	




	return 0;
}

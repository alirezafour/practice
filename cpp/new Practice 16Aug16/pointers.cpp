#include <iostream>
#include <string>
using namespace std;

//part 3
//******************
void makeMeYoung(int* age)
{
	cout << "I used to be " << *age << endl;
	*age = 21;
}

//part 4
//******************

void actYourAge(int& age)
{
	age = 39;
}

int main()
{
	int myAge = 39;
	char myGrade = 'A';

	cout << "size of int : " << sizeof(myAge) << endl;
	cout << "size of char : " << sizeof(myGrade) << endl;

	//refrence operator
	//
	
	cout << "myAge is located at " << &myAge << endl;

	//part 2 
	//******************
	
	cout << "***************\n Part 2 *******\n\n";

	int* agePtr = &myAge;

	cout << "Address of pointer : " << agePtr << endl;

	cout << "Data at memory address : " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 35};

	int* numArrayPtr = badNums;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	
	cout <<endl;
	cout << "Address " << badNums << " Value " << *badNums << endl;

	//**************
	//part 3
	//
	cout << "\n***************\n part 3 *******\n\n";


	makeMeYoung(&myAge);
	
	cout << "I'm " << myAge << " years old now" << endl;
	
	//************
	//part 4
	//
	cout << "\n***************\n part 4 ********\n\n";

	int& ageRef = myAge;

	cout << "myAge : " << myAge << endl;

	ageRef++;


	cout << "myAge : " << myAge << endl;

	actYourAge(ageRef);

	
	cout << "myAge : " << myAge << endl;

	return 0;
}

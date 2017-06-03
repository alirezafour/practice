#include <iostream>
#include <string>

using namespace std;

int main()
{
	char happyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0'}; // c version of string

	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;

	string yourName;
	cout <<"What is your name : ";
	getline(cin, yourName);


	cout << "hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout << "What is Euler's Constant? ";
	getline(cin, eulerGuess);
	
	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant)
	{
		cout << "You are right" << endl;
	} else
	{
		cout << "You are wrong" << endl;
	}
	
	//size of the string
	//
	cout << "\n*************\n size of the string *****\n\n";
	
	cout << "Size of String " << eulerGuess.size() << endl;
	cout << "Size of empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess") << endl;

	//compare a numbers
	//
	cout << "\n*************\n compare numbers *****\n\n";
	
	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	//copy value to another string
	//
	
	cout << "\n*************\n copy value to another string *****\n\n";

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0, 7);
	cout << firstName << endl;

	//search and insert String
	//
	
	cout << "\n*************\n search and insert String *****\n\n";

	int lastNameIndex = yourName.find("hor" , 0);
	cout << "Index for last name " << lastNameIndex << endl;
	yourName.insert(7, " banana!");
	cout << yourName << endl;

	yourName.erase(7, 8);
	cout << yourName << endl;
	
	yourName.replace(8, 7, "nashenas");

	cout << yourName << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//while loops
	//
	
	int randNum =  (rand() % 100) + 1;

	while(randNum != 100)
	{
		cout << randNum << ", ";
		randNum = (rand() % 100) + 1;
	}
	cout << endl;

	cout << "\n***********************\n\n";


	int index = 1;

	while(index <= 10) //like for loops
	{
		cout << index << endl;
		index++;

	}

	cout << "\n***********************\n\n";

	string numberGuessed;
	int intNumberGuessed = 0;

	do {
		cout << "Guess between 1 and 10 : ";

		getline(cin, numberGuessed); // get one line for input


		intNumberGuessed = stoi(numberGuessed); //convert string to int


		cout << intNumberGuessed << endl;
	} while (intNumberGuessed != 4);

	cout << "You win" << endl;
	return 0;
}

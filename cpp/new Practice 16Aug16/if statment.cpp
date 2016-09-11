#include <iostream>
using namespace std;

int main()
{
	// == , != , > , < , >= , <=
	// && , || , !
	//
	
	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age >= 1) && (age < 16))
	{
		cout << "You can't drive" << endl;

	} else if(! isNotIntoxicated)
	{
		cout << "You can't drive" << endl;
	} else if (age >= 80 && ((age > 100) || (( age - ageAtLastExam) > 5)))
	{
		cout << "You can't drive" << endl;

	} else
	{
		cout << "You can drive" << endl;
	}
	cout << "********************** another form of if \n\n";
	// variable = (condition) ? true : false
	//
	int largestNum = (5>2) ? 5 : 2;
	cout << "largestInt = "<< largestNum << endl;
	return 0;

}

#include <iostream>
using namespace std;


int addNumbers(int firstNum, int secendNum = 0) //secend has default value ( you can send just 1 value)
{
	int combinedValue = firstNum + secendNum;

	return combinedValue;
}

 
int addNumbers(int firstNum, int secendNum, int thirdNum) //same name but difference parameters
{
	return firstNum + secendNum + thirdNum;
}
// *******part 2
//
int getFactorial (int number)
{
	int sum;
	if(number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;

	// getFactorial(2) [return 2] * 3 = 6
	// getFactorial(1) [return 1] * 2
}
int main()
{
	cout << addNumbers(1) << endl;
	cout << addNumbers(1, 5, 6) << endl;
	
	//part 2
	//************
	
	cout << "the Factorial of 3 is : " << getFactorial(3) << endl;


	return 0;
}

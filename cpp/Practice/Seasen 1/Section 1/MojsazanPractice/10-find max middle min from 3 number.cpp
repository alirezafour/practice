/*name is alireza hor
email address is alirezafour@gmail.com
*/
/*this code is print max middle and min between 3 number
first get 3 number from user after that compare 2 of them and set to max and min
after it you need to compare max and min with number 3 when find where is the num3 print the result
*/

#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1(0), num2(0), num3(0), max(0), min(0);
	printf("Insert first number : ");
	std::cin >> num1; // get number 1
	printf("Insert secend number : ");
	std::cin >> num2; // get number 2
	printf("Insert thrid number : ");
	std::cin >> num3; // get number 3

	// compare first 2 number and set to max and min
	if(num1>num2)
	{
		max=num1;
		min=num2;
	}
	else
	{
		max=num2;
		min=num1;
	}

	// compare max amd min with num3 and print the result
	if(num3>max)
	{
		printf("max = %d \nmiddle = %d \nmin = %d \n", num3, max, min );
	}
	else if (num3>min)
	{
		printf("max = %d \nmiddle = %d \nmin = %d \n", max, num3, min );
	}
	else
	{
		printf("max = %d \nmiddle = %d \nmin = %d \n", max, min, num3 );
	}
	return 0;
}
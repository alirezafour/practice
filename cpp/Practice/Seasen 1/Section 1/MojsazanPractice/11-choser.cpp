/*name is alireza hor
email address is alirezafour@gmail.com
*/

/*the program is decision of 3 number and printing 
first get 2 number from user after that get choser number from user
if choser number == 0 going to function1 and print (number1 + number2)
if choser number < 0 going to function2 and print (number1 - number2)
else going to function3 and call (funtion1  * function2) and print ((number1 +number2) * (numebr1 - number2))
*/


#include <iostream>
#include <stdio.h>

int function1(int a1,int a2)
	{
		return a1+a2;
	}

	int function2(int b1,int b2)
	{
		return b1-b2;
	}

	int function3(int c1,int c2) 
	{
		return (function1(c1,c2))*(function2(c1,c2));
	}

	int main(int argc, char const *argv[]) {
	int num1(0), num2(0), choser(0);
	printf("Insert first number : ");
	std::cin >> num1;
	printf("Insert secend number : ");
	std::cin >> num2;
	printf("Insert Choser number :\n\nIF the number == 0 Print Number1 + Number2\nIF number < 0 Print Number1 - Number2\nElse Print (number1 + number2) * (number1 - number2)\n Insert Number : ");
	std::cin >> choser;
	
	if(choser == 0)
	{
		printf("number1 + number2 = %d \n", function1(num1, num2) );
	}
	else if(choser < 0)
	{
		printf("number1 - number2 = %d\n", function2(num1, num2) );
	}
	else
	{
		printf("(number1 + number2) * (number1 - number2) = %d\n", function3(num1, num2) );
	}
	return 0;
}

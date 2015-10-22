//this code is print of list menu of 3 number
#include <stdio.h>
using namespace std;
int main()
{
	
	int num1(0), num2(0), num3(0), choser(0);
	printf("Insert number 1 : ");
	scanf("%d", &num1);
	printf("Insert number 2 : ");
	scanf("%d", &num2);
	printf("Insert number 3 : ");
	scanf("%d", &num3);
	printf("\n1-Print (number1 + number2 + number3)\n");
	printf("2-Print (number1 - number2)\n");
	printf("3-Print (number1 - number3)\n");
	printf("4-Print (number2 * number3)\n");
	printf("5-Print (number1 * number2 * number3)\n");
	printf("6-Print (2 * number1 *number2) + (number1 - number2)\n");
	printf("7-Print (number1 + number2 + 10)-(4 * number1 * number2)\n");
	printf("8-Print (number1 * number2) - (2 * (number1 + number2)\n");
	printf("9-Print (2 * number1) + (2 * number2) - (2 * number1 * number2)\n");
	printf("\nInsert your number : ");
	scanf("%d", &choser);
	printf("\n");
	switch (choser)
	{
	case 1 :
		printf("(number1(%d) + number2(%d) + number3(%d)) = %d\n", num1, num2, num3, num1+num2+num3);
		break;
	case 2 :
		printf("(number1(%d) - number2(%d)) = %d\n", num1, num2, num2-num1);
		break;
	case 3 :
		printf("(number1(%d) - number3(%d)) = %d\n", num1, num3, num3-num1);
		break;
	case 4 :
		printf("(number2(%d) * number3(%d)) = %d\n", num2, num3, num2*num3);
		break;
	case 5 :
		printf("(number1(%d) * number2(%d) * number3(%d)) = %d\n", num1, num2, num3, num1*num2*num3);
		break;
	case 6 :
		printf("(2 * number1(%d) *number2(%d)) + (number1(%d) - number2(%d)) = %d\n", num1, num2, num1, num2, (2*(num1*num2))+num1-num2);
		break;
	case 7 :
		printf("(number1(%d) + number2(%d) + 10)-(4 * number1(%d) * number2(%d)) = %d\n", num1, num2, num1, num2, num1+num2+10-(4*(num1*num2)));
		break;
	case 8 :
		printf("(number1(%d) * number2(%d)) - (2 * (number1(%d) + number2(%d)) = %d\n", num1, num2, num1, num2, (num1*num2)-(2*(num1+num2)));
		break;
	case 9 :
		printf("(2 * number1(%d)) + (2 * number2(%d)) - (2 * number1(%d) * number2(%d)) = %d\n", num1, num2, num1, num2, (2*num1)+(2*num2)-(2*(num1*num2)));
		break;
	default :
		printf("WARRNING!!! \n the number is not on the list\n");
		}
	return 0;
}

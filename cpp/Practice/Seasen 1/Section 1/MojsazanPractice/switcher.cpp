#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1(0),num2(0),temp(0);
	printf("Insert number1 : ");
	scanf("%d", &num1);
	printf("Insert number2 : ");
	scanf("%d", &num2);
	printf("\n a = %d\n b = %d\n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("with temp swiched a and b \n a = %d\n b = %d\n", num1, num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("switched again without temp \n a = %d\n b = %d\n", num1, num2);
	return 0;
}
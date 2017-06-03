#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num(0);
	printf("Insert a number : ");
	scanf("%d", &num);
	while (num == 0)
	{
		printf("0 is not valid \n");
		printf("Insert a number : ");
		scanf("%d", &num);
	}
	if (num > 0)
	{
		printf("%d * %d = %d\n", num, num, num*num);
	}
	else
	{
		printf("| %d | = %d\n", num, (-1 * num));
	}
	return 0;
}
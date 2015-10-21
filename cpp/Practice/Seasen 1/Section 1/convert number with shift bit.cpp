
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int num(0);

	printf("Insert Number : ");
	scanf("%d", &num);

	printf("In base 8 = %o\n", num);
	printf("In base 16 = %x\n", num);
	return 0;
}
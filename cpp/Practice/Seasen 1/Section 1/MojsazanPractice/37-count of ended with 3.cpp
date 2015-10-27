#include <cstdio>

int main(int argc, char const *argv[])
{
	int num(1), counter(0);

	while(num != 0)
	{
		printf("Insert Number: ");
		scanf("%d", &num);
		if (num % 10 == 3)
		{
			counter++;
		}
	}
	printf("\ncount of number with ended with 3 = %d\n", counter);
	return 0;
}
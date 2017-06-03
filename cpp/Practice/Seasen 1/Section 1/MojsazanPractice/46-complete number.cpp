#include <cstdio>

int main(int argc, char const *argv[])
{
	int num(0), sum(0);
	printf("Insert Number: ");
	scanf("%d", &num);

	for (int i = 1; i <= (num / 2); ++i)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
	}

	if (sum == num)
	{
		printf("%d is Complete Number.\n", num);
	}
	else
	{
		printf("%d is NOT complete Number.\n", num);
	}
	return 0;
}
#include <cstdio>

int main(int argc, char const *argv[])
{
	int num(0);
	bool flag = false;
	printf("Insert Number: ");
	scanf("%d", &num);

	for (int i = 2; i < (num / 2); ++i)
	{
		if (num % i == 0)
		{
			printf("%d divisor %d\n", num, i);
			flag = true;
		}
	}
	if (!flag)
	{
		printf("%d is Prime.\n", num);
	}
	return 0;
}
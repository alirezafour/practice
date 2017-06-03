#include <cstdio>

int main(int argc, char const *argv[])
{
	int num[10] = {0};

	for (int i = 0; i < 10; ++i)
	{
		printf("Insert num %d/10: ", i + 1);
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; ++i)
	{
		(num[i]%2 == 0) ? printf("%d is odd.\n", num[i]) : printf("%d is even.\n", num[i]);
	}
	return 0;
}
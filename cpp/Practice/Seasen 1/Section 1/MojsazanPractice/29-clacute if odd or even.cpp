#include <cstdio>

int main(int argc, char const *argv[])
{
	int num[10] = {0};

	for (int i = 0; i < 20; ++i)
	{
		printf("Insert num %d/20: ", i + 1);
		scanf("%d", &num[i]);
		(num[i]%2 == 0) ? printf("2 * %d = %d\n", num[i], (2 * num[i])) : printf("3 * %d = %d\n", num[i], (3 * num[i]));
	}

	return 0;
}
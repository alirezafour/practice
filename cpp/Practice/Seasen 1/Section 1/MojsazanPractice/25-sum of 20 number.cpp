#include <cstdio>

int main(int argc, char const *argv[])
{
	int num[20] = {0}, sum(0);

	for (int i = 0; i < 20; ++i)
	{
		printf("Inset num %d of 20: ", i+1);
		scanf("%d", &num[i]);
		sum = sum + num[i];
	}
	printf("Sum = %d\n", sum);
	return 0;
}
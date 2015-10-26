#include <cstdio>

int main(int argc, char const *argv[])
{
	int num1[10] = {0}, num2[10] = {0}, sum[10] = {0}, sub[10] = {0};
	for (int i = 0; i < 10; ++i)
	{
		printf("Insert A of %d/10: ", i+1);
		scanf("%d", &num1[i]);
		printf("Insert B of %d/10: ", i+1);
		scanf("%d", &num2[i]);
		sum[i] = num1[i] + num2[i];
		sub[i] = num1[i] - num2[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		printf("A(%d) + B(%d) = %d\n", i+1, i+1, sum[i]);
		printf("A(%d) - B(%d) = %d\n\n", i+1, i+1, sub[i]);
	}
	return 0;
}
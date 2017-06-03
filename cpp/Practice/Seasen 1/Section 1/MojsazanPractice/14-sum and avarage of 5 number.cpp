#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arrayNum[5] ={0}, sum(0), avg(0);

	for (int i = 0; i < 5; ++i)
	{
		printf("Insert number %d : ", (i + 1));
		scanf("%d", &arrayNum[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		sum = sum + arrayNum[i];
	}
	avg = sum / 5;

	printf("sum = %d\navg = %d\n", sum, avg);
	return 0;
}
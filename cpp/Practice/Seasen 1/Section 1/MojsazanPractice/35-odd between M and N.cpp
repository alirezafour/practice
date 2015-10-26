#include <cstdio>

int main(int argc, char const *argv[])
{
	int min(0), max(0);

	printf("Insert N: ");
	scanf("%d", &min);
	printf("Insert M: ");
	scanf("%d", &max);

	if 	(max < min)
	{
		int temp(0);
		temp = min;
		min = max;
		max = temp;
	}

	for (int i = min; i < max; ++i)
	{
		if (i % 2 != 0)
		{
			printf("first num is even = %d\n", i);
		}
		else
		{
			printf("the number is = %d\n", i);
			i++;
		}
	}
	return 0;
}
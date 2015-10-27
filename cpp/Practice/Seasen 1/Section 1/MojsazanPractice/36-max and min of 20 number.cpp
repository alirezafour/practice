#include <cstdio>

int main(int argc, char const *argv[])
{
	int num(0), max(0), min(0);

	for (int i = 0; i < 20; ++i)
	{
		printf("Insert number %d/20: ", i+1);
		scanf("%d", &num);
		if (i == 0)
		{
			max = min = num;
		}
		else
		{
			if (num > max)
			{
				max = num;
			}
			else if (num < min)
			{
				min = num;
			}
			
		}
	}
	printf("max = %d\nmin = %d\n", max, min);
	return 0;
}
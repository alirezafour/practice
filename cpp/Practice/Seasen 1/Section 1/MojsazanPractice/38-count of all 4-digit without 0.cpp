#include <cstdio>

int main(int argc, char const *argv[])
{
	int	counter(0), num(0);
	for (int i = 1111; i < 10000; ++i)
	{
		num = i;
		while(num > 9)
		{
			if (num % 10 == 0)
			{
				break;
			}
			else
			{
				num /= 10;
			}
		}
		if (num < 10)
		{
			counter++;
		}
	}
	printf("count of all 4-digit whithout 0 = %d\n", counter);
	return 0;
}
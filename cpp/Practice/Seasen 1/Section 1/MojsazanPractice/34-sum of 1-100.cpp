#include <cstdio>

int main(int argc, char const *argv[])
{
	int sum(0);
	for (int i = 1; i < 100; ++i)
	{
		sum += i;
		printf("sum of 1 - %d = %d\n", i, sum);
	}
	return 0;
}
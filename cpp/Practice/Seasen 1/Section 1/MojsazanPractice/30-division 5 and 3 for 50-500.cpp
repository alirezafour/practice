#include <cstdio>

int main(int argc, char const *argv[])
{
	int num;

	for (int i = 50; i < 500; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			printf("the num is: %d\n", i);
		}
	}
	return 0;
}
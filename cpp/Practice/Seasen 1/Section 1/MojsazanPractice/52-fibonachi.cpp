#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
	int a, pre2 = 1, pre1 = 1;
	int fib = 1;
	printf("Insert your number: ");
	scanf("%d", &a);
	printf("%d %d ", pre2, pre1);
	while (fib < a)
	{
		fib = pre2 + pre1;
		if (fib > a)
		{
			break;
		}
		else
		{
			printf("%d ", fib);
		}
		pre2 = pre1;
		pre1 = fib;
	}

	return 0;
}

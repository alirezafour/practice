#include <cstdio>

int main(int argc, char const *argv[])
{
	int x,y;
	printf("insert X: ");
	scanf("%d", &x);
	if(x < 0)
	{
		y = 1 - (2 * x);
	}
	else if(x = 0)
		{
			y = 0;
		}
		else
		{
			y = 1 + (2 * x);
		}
	printf("\ny = %d\n", y);
	return 0;
}
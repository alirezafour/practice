#include <cstdio>

int main(int argc, char const *argv[])
{
	int num(0);

	printf("Insert number: ");
	scanf("%d", &num);

	printf("%d factorial is ", num);
	for (int i = num-1; i > 0; i--)
	{
		num = num * i;
	}
	printf("%d\n", num);
	return 0;
}
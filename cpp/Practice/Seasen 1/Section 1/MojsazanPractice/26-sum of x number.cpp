#include <cstdio>

int main(int argc, char const *argv[])
{
	int count(0), *num, sum(0);

	printf("insert x: ");
	scanf("%d", &count);
	num = new int[count];
	
	for (int i = 0; i < count; ++i)
	{
		printf("Insert num %d of %d: ", i + 1, count);
		scanf("%d", &num[i]);
		sum = sum + num[i];
	}
	printf("Sum = %d\n", sum);
	return 0;
}
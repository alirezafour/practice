#include <cstdio>

int main(int argc, char const *argv[])
{
	float student(0);
	int count10(0), count12(0), count15(0), count17(0), count20(0);

	for (int i = 0; i < 100; ++i)
	{
		printf("Insert grade of student NO, %d/100: ", (i + 1));
		scanf("%f", &student);
		if (student < 10)
		{
			count10++;
		}
		else if (student < 12)
		{
			count12++;
		}
		else if (student < 15)
		{
			count15++;
		}
		else if (student < 17)
		{
			count17++;
		}
		else if (student < 20)
		{
			count20++;
		}
	}
	printf("count of grade under 10 = %d\ncount of grade 10-12 = %d\ncount of grade 12-15 = %d\ncount of grade 15-17 = %d\ncount of grade 17-20 = %d\n", count10, count12, count15, count17, count20);
	return 0;
}
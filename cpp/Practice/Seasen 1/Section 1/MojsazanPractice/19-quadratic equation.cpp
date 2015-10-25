#include <cstdio>
#include <cmath>

int main(int argc, char const *argv[])
{
	int a(0), b(0), c(0);
	float temp(0);

	printf("Insert a of Quadratic equation: ");
	scanf("%d", &a);
	printf("Insert b of Quadratic equation: ");
	scanf("%d", &b);
	printf("Insert c of Quadratic equation: ");
	scanf("%d", &c);

	temp = (b * b) - (4 * a * c);

	if (temp == 0)
	{
		printf("X = %2.2f\n", (float)((- b)/(2 * a)));
	}else if (temp < 0)
	{
		printf("The equation does not answer.\n");
	}else if (temp > 0)
	{
		printf(" X = %2.2f\nX = %2.2f\n", ((- b) + sqrt(temp)) / (2 * a), ((- b) - sqrt(temp)) / (2 * a));
	}
	return 0;
}
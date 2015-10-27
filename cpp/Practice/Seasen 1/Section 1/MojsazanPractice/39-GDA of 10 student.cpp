#include <cstdio>

struct student
{
	float math;
	float physics;
	float chemistry;
};

int main(int argc, char const *argv[])
{
	float gda(0), allGda(0);
	student std[10];
	for (int i = 0; i < 10; ++i)
	{
		printf("Insert math student N%d/10: ", i);
		scanf("%f", &std[i].math);
		printf("Insert physics student N%d/10: ", i);
		scanf("%f", &std[i].physics);
		printf("Insert chemistry student N%d/10: ", i);
		scanf("%f", &std[i].chemistry);
	}
	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		gda = (std[i].math + std[i].physics + std[i].chemistry) / 3;
		printf("GDA of Strudent NO,%d is %2.2f\n", i, gda);
		allGda += gda;
	}
	printf("\nAll class GDA is %2.2f\n", (allGda / 10));
	return 0;
}
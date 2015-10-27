#include <cstdio>

struct student
{
	float math;
	float physics;
	float english;
};

int main(int argc, char const *argv[])
{
	float gda(0), allGda(0), gdaMath(0), gdaPhysics(0), gdaEnglish(0);
	student std[40];
	for (int i = 0; i < 40; ++i)
	{
		printf("Insert grade of math student No, %d/40: ", (i + 1));
		scanf("%f", &std[i].math);
		printf("Insert grade of physics student No, %d/40: ", (i + 1));
		scanf("%f", &std[i].physics);
		printf("Insert grade of english student No, %d/40: ", (i + 1));
		scanf("%f", &std[i].english);
	}

	printf("\n");
	for (int i = 0; i < 40; ++i)
	{
		gda = (std[i].math + std[i].physics + std[i].english) / 3;
		printf("GDA of Strudent NO,%d is %2.2f\n", (i + 1), gda);
		allGda += gda;
	}

	printf("\n");
	for (int i = 0; i < 40; ++i)
	{
		gdaMath += std[i].math;
		gdaPhysics += std[i].physics;
		gdaEnglish += std[i].english;
	}
	printf("math GDA class = %2.2f\nphysics GDA class = %2.2f\nenglish GDA class = %2.2f\n\nGDA all class = %2.2f\n", (gdaMath / 40), (gdaPhysics / 40), (gdaEnglish / 40), (allGda / 40));
	return 0;
}
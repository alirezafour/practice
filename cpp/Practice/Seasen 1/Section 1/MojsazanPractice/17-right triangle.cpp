#include <cstdio>

int main(int argc, char const *argv[])
{
	int side1(0), side2(0), side3(0);
	printf("Insert side1: ");
	scanf("%d", &side1);
	printf("Insert side2: ");
	scanf("%d", &side2);
	printf("Insert side3: ");
	scanf("%d", &side3);

	if((side1 * side1) == ((side2 * side2) + (side3 * side3)) || (side2 * side2) == ((side1 * side1) + (side3 * side3)) || (side3 * side3) == ((side2 * side2) + (side1 * side1)))
	{
		printf("\nIt's Right triangle\n");
	}
	else
	{
		printf("\nIt's not Right triangle\n");
	}
	return 0;
}
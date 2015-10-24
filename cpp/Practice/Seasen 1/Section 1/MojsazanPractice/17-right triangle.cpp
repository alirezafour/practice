/* writed by alireza hor
 * email address is alirezafour@gmail.com
*/
/* this code just say your triangle is right or not
 * just get side 1 to 3 and compare & calcute with fisaghores (A*A = B*B + C*C)
 * after that just print your triangle is Right or not
*/
#include <cstdio>

int main(int argc, char const *argv[])
{
	int side1(0), side2(0), side3(0);

	printf("this program get your triangle side and say it's right triangle or Not.\n\n");

	printf("Insert side1: ");
	scanf("%d", &side1);

	printf("Insert side2: ");
	scanf("%d", &side2);

	printf("Insert side3: ");
	scanf("%d", &side3);

	if((side1 * side1) == ((side2 * side2) + (side3 * side3)) || (side2 * side2) == ((side1 * side1) + (side3 * side3)) || (side3 * side3) == ((side2 * side2) + (side1 * side1)))
	{
		printf("\nIt's Right triangle.\n");
	}
	else
	{
		printf("\nIt's not Right triangle.\n");
	}
	return 0;
}
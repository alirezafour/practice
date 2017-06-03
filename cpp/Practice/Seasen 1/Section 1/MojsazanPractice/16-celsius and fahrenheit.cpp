#include <cstdio>

int main(int argc, char const *argv[])
{
	int celsius(0), fahrenheit(0), select(0);

	printf("select of menu\n");

	printf("1-celsius to fahrenheit\n");
	printf("2-fahrenheit to celsius\n");
	printf("insert number: ");
	scanf("%d", &select);

	switch(select)
	{
		case 1:
			printf("insert celsius: ");
			scanf("%d", &celsius);
			printf("\n fahrenheit is : %d\n", ((celsius * 9 / 5) + 32));
			break;
		case 2:
			printf("insert fahrenheit: ");
			scanf("%d", &fahrenheit);
			printf("\n celsius is : %d\n", ((fahrenheit - 32) * 9 / 5));
			break;
		default :
			printf("WARRNING!!! \n the number is not in the menu\n");
	}
	return 0;
}
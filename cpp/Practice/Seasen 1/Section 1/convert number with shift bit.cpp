/*name is alireza hor
email address is alirezafour@gmail.com
*/

/*this code print numbers in base 8 and 16
just use printf option
get a number from user after that print woth %o (for base 8) and %x (for base 16)
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int num(0);

	printf("Insert Number : ");
	scanf("%d", &num);

	printf("In base 8 = %o\n", num); //print in base 8
	printf("In base 16 = %x\n", num); // print in base 16
	return 0;
}
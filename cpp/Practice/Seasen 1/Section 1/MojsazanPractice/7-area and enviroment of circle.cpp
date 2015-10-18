/*  name is alireza hor
email address is alirezafour@gmail.com
/*this code is print area and environment of circle
just get the radius after that calcute area and enviroment and print it
*/
#include <iostream>
#include <stdio.h>

int main()
{
	int radius(0);
	float nPi=3.14;
	printf("Insert Radius : ");
	std::cin>>radius;
	printf("Area = %2.2f \n", (radius * radius * nPi) );
	printf("environment = %2.2f \n", (2 * radius * nPi) );
	return 0;
}

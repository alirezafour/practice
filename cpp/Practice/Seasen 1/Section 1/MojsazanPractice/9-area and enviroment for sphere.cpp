/* name is alireza hor
email is alirezafour@gmail.com
*/
/*this code for calcute the area and enviroment of sphere
just get the radius and calcute enviroment and area and print it
*/
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int radius(0);
	float enviroment(0), area(0);
	printf("Insert Radius : ");
	std::cin >> radius; // get the radius from user

	//calcute the area and enviroment
	area = 4 * 3.14 * radius * radius;
	enviroment = (4 / 3) * 3.14 * radius * radius * radius;

	//print
	printf("area = 4  * Pi * (%d) * (%d) = %2.2f \n", radius, radius, area );
	printf("enviroment = (4 / 3 ) * Pi * (%d) * (%d) * (%d) = %2.2f \n", radius, radius, radius, enviroment );
	return 0;
}
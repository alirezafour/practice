#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int side1(0), side2(0), side3(0), height(0), rule(0) ;

	printf("Insert the side1 : ");
	std::cin >> side1;
	printf("Insert the side2 : ");
	std::cin >> side2;
	printf("Insert the side3 : ");
	std::cin >> side3;
	printf("Insert the rule : ");
	std::cin >> rule;
	printf("Insert the height : ");
	std::cin >> height;

	printf("enviroment = (%d) + (%d) + (%d) = %d \n", side1, side2, side3, (side1 + side2 + side3) );
	printf("area = (%d) * (%d) / 2 = %d\n", height, rule, ((height * rule) / 2) );

	return 0;
}
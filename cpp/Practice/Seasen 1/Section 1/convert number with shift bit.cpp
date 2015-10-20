#include <iostream>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	unsigned int num(0), temp(0), temp2(0), ret(0);

	printf("Insert Number : ");
	std::cin >> num;

	temp = num;

	for (int i = 0; temp != 0; ++i)
	{
		temp2 = temp >> 3; temp2 = temp2 << 3; temp2 = temp - temp2;
		temp = temp >> 3;
		ret = temp2 * pow(10, i);
	}

	printf("dar mabnaye 8 = %d\n", ret);
	return 0;
}
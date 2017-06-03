/* my name is alireza hor
my email address is alirezafour@gmail.com
*/

/* this program for find maximum of the three number
program Find maximum with compare 2 first number (num1 & num2) and set to (max)
after that compare with (num3) and set maximum to (max)
*/
#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
  	int num1(0), num2(0), num3(0), max(0); // set default 0 with diferent style
  	printf("insert 3 number : ");
  	std::cin >> num1 >> num2 >> num3; // get 3 number from user
  	// if I find number is max from other set to max number
  	if (num1 > num2) 
  	{
   		 max = num1;
  	}
  	else
  	{
    	max = num2;
  	}
  	if (num3 > max) 
  	{
    	max = num3;
  	}
	//print maximum
  	printf("maximum is (%d)\n", max );
  	return 0;
}

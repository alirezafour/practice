/* my name is alireza hor
 my email address is alirezafour@gmail.com
*/

/* this code for find maximum of two number 
first is num1 and secend is num2
after compare two number Printed maximum
*/

#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
  	int num1 = 0;
    int num2 = 0;

    printf("insert first number : ");
    std::cin >> num1; //get first number

    printf("insert first number : ");
    std::cin >> num2; //get secend number

    if (num1 > num2) { // find the maximum of numbers
      printf("first number (%d) is maximum\n", num1 ); //print maximum if num1 is max
    }
    else {
      printf("secend number (%d) is maximum\n", num2 ); // print maximum if num2 is max
    }
    return 0;

}
    
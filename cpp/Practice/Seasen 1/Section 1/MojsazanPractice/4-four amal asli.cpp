/*  name is alireza hor
email address is alirezafour@gmail.com
*/
/* program for print 4 oparaiton of two number
first we get 2 number from user and calcute the 4 oparation
after that print it
*/
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int num1(0), num2(0), sum(0), sub(0), mul(0);
    float div(0);
    printf("Insert first Number : ");
    std::cin >> num1; // get the first number from user
    printf("Insert dsecend Number : ");
    std::cin >> num2; // get the secend number from user

    //calcute 4 oparation of (num1) and (num2)
    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / (float)num2; // need to change int to float because division need float

    //print 
    printf("(%d) + (%d) = (%d)\n", num1 , num2 , sum );
    printf("(%d) - (%d) = (%d)\n", num1 , num2 , sub );
    printf("(%d) * (%d) = (%d)\n", num1 , num2 , mul );
    printf("(%d) / (%d) = (%2.2f)\n", num1 , num2 , div );
    return 0;
}

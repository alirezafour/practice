/*  name is alireza hor
email address is alirezafour@gmail.com
*/
/* this code for get the 2 number from user and print enviroment and area of rectangul
*/
#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[])
{
  int hight(0),lengh(0);

  printf("Insert hight : ");
  std::cin >> hight; //get the hight of rectangul
  printf("Insert Lengh : ");
  std::cin >> lengh; //get ther lengh of rectangul

  printf("area is : %d\n", (lengh * hight) ); //calcute and print the area
  printf("enviroment is : %d \n", ((lengh + hight)*2) ); //calcute and print the enviroment

  return 0;
}

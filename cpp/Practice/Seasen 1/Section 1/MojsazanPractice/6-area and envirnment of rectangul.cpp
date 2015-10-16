#include <stdio.h>
#include <iostream>
int main(int argc, char const *argv[]) {
  int hight(0),lengh(0);
  printf("Insert hight : ");
  std::cin >> hight;
  printf("Insert Lengh : ");
  std::cin >> lengh;

  printf("area is : %d\n", (lengh * hight) );
  printf("enviroment is : %d \n", ((lengh + hight)*2) );

  return 0;
}

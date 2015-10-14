#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[]) {

  int weaknum(0);

  printf("Insert the numeber if weak :");
  std::cin >> weaknum;


  switch (weaknum) {
  case 1 :
  	      printf("saturday\n");
  	      break;
  case 2 :
  	      printf("sanday\n");
  	      break;
  case 3 :
          printf("monday\n");
          break;
  case 4 :
          printf("tuesday\n");
          break;
  case 5 :
          printf("wedensday\n");
          break;
  case 6 :
          printf("thusday\n");
          break;
  case 7 :
          printf("friday\n");
          break;
  default :
          printf("wrong number.\n");
  }
  return 0;
}

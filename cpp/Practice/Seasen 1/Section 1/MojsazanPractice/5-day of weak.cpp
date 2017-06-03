/*  name is alireza hor
email address is alirezafour@gmail.com
*/
/* this code for get num of the weak and print the name of that
get the number of weak and compare it with switch and print the name if weak
*/
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{

  int weaknum(0); 

  printf("Insert the numeber if weak :");
  std::cin >> weaknum; //get the number from user


  switch (weaknum) //compare it and print the name of weak
  {
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
           printf("wrong number.\n"); //if the number is not between 1-7 print warrning
  }
  return 0;
}

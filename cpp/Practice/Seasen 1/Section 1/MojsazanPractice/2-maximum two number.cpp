	#include <stdio.h>
  #include <iostream>
  int main(int argc, char const *argv[]) {
    int num1 = 0;
    int num2 = 0;

    printf("insert first number : ");
    std::cin >> num1; //get first number

    printf("insert first number : ");
    std::cin >> num2; //get secend number

    if (num1 > num2) { // find the maximum of numbers
      printf("first number (%d) is maximum\n", num1 );
    }
    else {
      printf("secend number (%d) is maximum\n", num2 );
    }
    return 0;
  }

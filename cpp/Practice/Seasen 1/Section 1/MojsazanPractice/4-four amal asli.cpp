#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num1(0), num2(0), sum(0), sub(0), mul(0);
  float div(0);
  printf("Insert 2 Number : ");
  std::cin >> num1 >> num2;
  sum = num1 + num2;
  sub = num1 - num2;
  mul = num1 * num2;
  div = num1 / num2;

  printf("(%d) + (%d) = (%d)\n", num1 , num2 , sum );
  printf("(%d) - (%d) = (%d)\n", num1 , num2 , sub );
  printf("(%d) * (%d) = (%d)\n", num1 , num2 , mul );
  printf("(%d) / (%d) = (%f)\n", num1 , num2 , div );
  return 0;
}

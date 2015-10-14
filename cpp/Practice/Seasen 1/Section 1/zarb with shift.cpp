#include <stdio.h>
int main() {
  int num1 = 0;
  int num2 = 0;
  printf("Insert the first Number : ");
  scanf("%d",&num1 );
  printf("now insert secend Number : ");
  scanf("%d", &num2 );
  int zarb = 0;
  int taghsim = 0;

  zarb = num1 << num2;
  taghsim = num1 >> num2;

  printf("zarb = %d\n",zarb );
  printf("taghsim = %d\n", taghsim );
  return 0;
}

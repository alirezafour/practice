#include <stdio.h>
#include <iostream>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  int secend(0), minutes(0), hour(0);
  printf("timer : \n");

  while (true) {
  secend++;
  if (secend == 60) {
    secend = 0;
    minutes++;
    if (minutes == 60) {
      minutes = 0;
      hour++;
      if (hour == 99) {
        hour = 0;
        printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K%02d:%02d:%02d\n", hour, minutes, secend );
      }
      else {
        printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K%02d:%02d:%02d\n", hour, minutes, secend );
      }
    }
    else {
      printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K%02d:%02d:%02d\n", hour, minutes, secend );
    }
  }
  else {
    printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K%02d:%02d:%02d\n", hour, minutes, secend );
  }
  usleep(1000000);
  }
  return 0;
}

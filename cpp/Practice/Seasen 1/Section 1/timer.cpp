/* write by alireza hor
 email address alirezafour@gmail.com
*/
/* this code just show color timer
used asci esc code to delete and change color in terminal
this code set 3 argomane for hour , minutes and secend and one argomant for change color
one while loop for count and print timer
check the argomant for calcute secend and minute and hour after that print it and change color after evrey minutes
*/

#include <stdio.h>
#include <iostream>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  int secend(0), minutes(0), hour(0);
  unsigned short int i(31);
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
      printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K\x1b[%im%02d:%02d:%02d\n\033[0m", i++, hour, minutes, secend ); //change envioment i for change color 
    }
  }
  else {
    printf("\033[A\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[C\033[K\x1b[%im%02d:%02d:%02d\n\033[0m", i, hour, minutes, secend );
  }

  if(i == 38)
    i = 31;
  usleep(1000000); //delay 1 sec
  }
  return 0;
}

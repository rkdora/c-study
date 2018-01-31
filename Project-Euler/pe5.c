#include <stdio.h>
#include <stdlib.h>
//1 から 20 までの整数すべてで割り切れる最小の整数は何か？

int one_h5(void){
  int count = 0;
  for (int ans = 1;;ans++) {
    count = 0;
    for (int i = 1; i <= 20; i++) {
      if (ans % i == 0) {
        count++;
        if (count == 20) {
          return ans;
        }
      }
    }
  }
}

//ans : 232792560

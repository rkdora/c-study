#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start;

//1 から 20 までの整数すべてで割り切れる最小の整数は何か？

int pe5(void){
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

int main(void){
  start = clock();
  printf("%d\n", pe5());
  printf("time : %ld[ms]\n", clock() - start);
  return 0;
}

//ans : 232792560
//32953046[ms]

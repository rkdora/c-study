#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start;

//1 から 20 までの整数すべてで割り切れる最小の整数は何か？

int is_prime(int n) {
  for (int i=2; i<n; i++) {
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}

void pe5(void){
  int ans = 1;
  for (int i = 2; i <= 20; i++) {
    if(is_prime(i)){
      ans *= i;
      printf("%d\n", i);
    }
  }
  printf("ans : %d\n", ans);
}

int main(void){
  start = clock();
  pe5();
  printf("time : %ld[ms]\n", clock() - start);
  return 0;
}

//ans : 232792560
//32953046[ms]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t start, start1, stop, end;
int ans1, ans2;

int main(void){
  start = clock();
  ans1 = 2 * 2;
  stop = clock();

  start1 = clock();
  ans2 = 2<<1;
  end = clock();

  printf("2 * 2 = %d\n", ans1);
  printf("time : %ld[ms]\n", stop - start);

  printf("2<<1 = %d\n", ans2);
  printf("time2 : %ld[ms]\n", end - start1);
  return 0;
}

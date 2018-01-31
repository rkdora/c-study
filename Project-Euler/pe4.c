#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

clock_t start;

//3桁の数の積で表される回文数の最大値を求めよ。
/*
int get_digit(int n){
  return log10(n) + 1;
}
*/
int get_digit(int arg){
  int digit = 0;
  while (arg != 0) {
    arg /= 10;
    digit++;
  }
  return digit;
}

int power(int n, int m){
  int ans = 1;
  for (int i = 0; i < m; i++){
    ans *= n;
  }
  return ans;
}

int kaibun_for_pe4(int n) {
  int digit = get_digit(n);
  int a[11] = {};
  int sum = 0;
  for (int i = 0; i < digit; i++) {
    a[i] = n / power(10, i) % 10;
    sum += a[i] * power(10, digit - i - 1);
  }
  return sum == n;
}

int max2(int x, int y){
  if (x > y){
    return x;
  } else if (x < y){
    return y;
  }
}


void pe4(){
  int ans = 0;
  int ans_i = 0;
  int ans_j = 0;
  for (int i = 999; i > 100; i--) {
    for (int j = 999; j > 100; j--) {
      if (kaibun_for_pe4(i * j)) {
        ans = max2(ans, i*j);
        if (ans == i*j) {
          ans_i = i;
          ans_j = j;
        }
      }
    }
  }
  printf("ans: %d * %d = %d\n", ans_i, ans_j, ans);
}

int main(void){
  start = clock();
  pe4();
  printf("time : %ld[ms]\n", clock() - start);
  return 0;
}

//ans: 913 * 993 = 906609

#include <stdio.h>
#include <stdlib.h>

//600851475143 の素因数のうち最大のものを求めよ
void pe3(){
  long target = 600851475143;
  long x = target;
  long i = 2;
  long primes[1000] = {};
  long count = 0;
  long ans = 0;
  while (x > 1) {
    if (x % i == 0) {
      primes[count] = i;
      x = x / i;
      count++;
    } else {
      i++;
    }
  }
  ans = primes[count - 1];
  printf("%ld\n", ans);
}

//ans : 6857

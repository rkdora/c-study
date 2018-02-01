#include <stdio.h>
#include <stdlib.h>
//1
//"hello, robocar!" を n 回プリントする関数
void hello_p(int n){
  for (int i = 0; i < n; i++){
    printf("hello, robocar!\n");
  }
}
//2
//整数をキーボードから読み、 それに1を足した数を表示する関数
void add_p(void){
	int x;
	scanf("%i",&x);
	printf("%i",x+1);
}
//3
//整数を引数にとり、それに1足した数を表示する関数
void add1_p(int x){
	printf("%i に１足すと%iです\n",x,x+1);
}
//4
//整数を引数にとり、それに1足した数を戻り値とする関数
int add1(int x){
	return x+1;
}
//5
//整数二つを引数にとり、それらを足した数を戻り値とする関数
int add2(int x,int y){
	return x+y;
}
//6
//整数二つを引数にとり、それらの和、差、積、整数商をプリントする関数
void wa_sa_seki_sho_p(int x, int y){
	printf("%i + %i = %i\n",x,y,x+y);
	printf("%i - %i = %i\n",x,y,x-y);
	printf("%i * %i = %i\n",x,y,x*y);
	printf("%i / %i = %i\n",x,y,x/y);
}
//7
//整数二つを引数にとり、大きい方の整数をプリントする関数
void max_p(int x, int y){
  int z;
  if (x > y){
    z = x;
  }else if (x < y){
    z = y;
  }
  printf("%i と　%iでは　%iの方が大きい\n",x,y,z);
}
//8
// 整数二つを引数にとり、大きい方の整数を戻り値とする関数
int max2(int x, int y){
  if (x > y){
    return x;
  }else if (x < y){
    return y;
  }
}
//9
//整数三つを引数にとり、もっとも大きい整数を戻り値とする関数
int max3(int x,int y,int z){
		return max2(max2(x,y),z);
}
//10
//整数4つを引数にとり、もっとも大きい整数を戻り値とする関数
int max4(int x,int y,int z,int w){
	return max2(max2(x,y),max2(z,w));
}
//11
//キーボードから整数ひとつを入力し、それが偶数だったら"偶数です"、 奇数だったら"奇数です"とプリントする関数
void even_p(void){
  int i;
  printf("整数を入力してください\n");
  scanf("%i",&i);
  if (i%2){
    printf("奇数です\n");
  }else {
    printf("偶数です\n");
  }
}
//12
//整数ひとつを引数にとり、それが偶数だったら"偶数です"、 奇数だったら"奇数です"とプリントする関数
void even1_p(int x){
  if (x%2){
    printf("%iは奇数です\n",x);
  }else {
    printf("%iは偶数です\n",x);
  }
}
//13
//整数ひとつを引数にとり、それが偶数だったら 1、 奇数だったら 0 を返す関数
int even(int x){
  if (x%2){
    return 0;
  }else {
    return 1;
  }
}
//14
//整数二つを引数にとり、そのうちの偶数である数をプリントする関数。 偶数がなかったら "見つかりません" をプリント
void evens_p(int x,int y){
  if (even(x) && even (y)){
    printf("%i と %iは偶数です\n",x,y);
  }else if (even(x)){
    printf("%iは偶数です\n",x);
  }else if (even(y)){
    printf("%iは偶数です\n",y);
  }else {
    printf("見つかりません\n");
  }
}
//15
//正の整数二つを引数にとり、偶数である数を戻り値とする関数。 偶数がなかったら -1 を返せ。
int evens2(int x,int y){
  if (even(x)){
    return x;
  }else if (even(y)){
    return y;
  }else {
    return -1;
  }
}
//16
//正整数三つを引数にとり、そのうちの最初の偶数を戻りとする関数。 偶数なかったら -1 を返す。
int evens3(int x,int y,int z){
	return evens2(evens2(x,y),z);
}
//17
//キーボードから整数 x、y を入力し、 x が y で割り切れたら "割り切る"、 そうでない時、"割り切れない" をプリントする関数 
void divide_p(void){
  int x,y;
  scanf("%i", &x);
  scanf("%i", &y);
  if (x%y){
    printf("割り切れない");
  }else {
    printf("割り切る");
  }
}
//18
//整数二つを引数とし、第 1 引数が第 2 引数で割り切れたら 1、 そうでない時 0を返す関数
int divide(int x, int y){
  if (x%y){
    return 0;
  }else {
    return 1;
  }
}
//19
//整数一つを引数とし、その約数を全てプリントする関数
void divisors_p(int n){
  for (int i=1;i<=n;i++){
    if (divide(n,i))
      printf("%i\n",i);
  }
}
//20
//整数一つを引数とし、その約数の合計を戻り値とする関数
int sum_of_divisors(int n){
  int sum = 0;
  for (int i=1;i<=n;i++){
    if (divide(n,i)){
      sum += i;
    }
  }
  return sum;
}
//21
//整数一つを引数とし、その数が完全数かどうかを判定する関数
int is_perfect(int n){
  if (sum_of_divisors(n) - 2*n == 0){
    return 1;
  }else {
    return 0;
  }
}
//22
//整数一つを引数とし、その数が素数だったら"素数です"とプリントする関数
void is_print_p(int n) {
  for (int i=2; i<n; i++){
    if (n % i == 0){
      return;
    }
  }
  printf("%iは素数です\n",n);
}
//23
//整数一つを引数とし、 その数が素数だったら1、素数でなかったら 0 を返す関数 
int is_prime(int n) {
  for (int i=2; i<n; i++) {
    if (n % i == 0){
      return 0;
    }
  }
  return 1;
}
//24
//10 以下の素数は何個あるかをプリントする関数
void primes_p(void){
  int count = 0;
  for (int i = 2; i < 10; i++){
    if (is_prime(i)){
      count++;
    }
  }
  printf("10以下の素数は%i個ある\n",count);
}
//25
//100 以下の素数は何個あるかを戻り値とする関数
int prime100(void){
  int count = 0;
  for (int i = 2; i < 100; i++){
    if (is_prime(i)){
      count++;
    }
  }
  return count;
}
//26
//n以下の素数(nは整数)は何個あるかを戻り値とする関数
int prime(int n){
  int count = 0;
  for (int i = 2; i < n; i++){
    if (is_prime(i)){
      count++;
    }
  }
  return count;
}
//27
//二桁の整数 x について ゾロ目（つまり 11 とか 22 とか）だったら" ゾロ目です" をプリントする関数
void zorome_p(int x){
  for (int i = 1; i < 10; i++){
    if (11*i == x){
      printf("%iはゾロ目です\n",x);
    }
  }
}
//28
//二桁の整数についてゾロ目となる数は何個あるかを返す関数
int zorome2(void){
  int count = 0;
  for (int i = 1; i < 10; i++){
    for (int x = 10; x < 100; x++){
      if (11*i == x){
        count++;
      }
    }
  }
  return count;
}
//29
//from ≤ x ≤ to の範囲の整数 x について(xは二桁とは限らない)、ゾロ目となる数は何個あるかを返す関数
int zorome(int from, int to) {
  int x,y,z,count = 0;
  for (int i = from; i <= to; i++){
    z = 0;
    y = i % 10;
    x = i / 10;
    for (;x > 0;) {
      if ((x % 10) == y) {
        y = x % 10;
        x = x / 10;
        z++;
      }else {
        z = 0;
        x = 0;
      }
    }
    if (z > 0){
      count++;
    }
  }
  return count;
}
//30
//3桁の整数の桁を入れ替えた整数を返す関数
int rev3(int n){
  int a[3] = {};
  a[0] = n / 100;
  a[1] = (n / 10) % 10;
  a[2] = n % 10;

  return (a[2]*100 + a[1]*10 + a[0]);
}

//31
//rev3(n) が元の整数 n と等しくなる3桁の整数は何個あるかを返す関数
int how_many_rev3(void){
  int count = 0;
  for (int i = 100; i < 1000; i++){
    if (rev3(i) == i){
      count++;
    }
  }
  return count;
}
//32
//rev3(n)== n かつ is_prime(n) を満たす最大の数を返す
int max_rev3_and_prime(void){
  int max = 0;
  for (int i = 100; i < 1000; i++){
    if (rev3(i) == i && is_prime(i) == 1){
      max = i;
    }
  }
  return max;
}
//33
//100 以下の 7 の倍数を全てプリントする関数 
void sevens_100_p(void){
  for (int i = 1; i <= 100; i++){
    if (i % 7 == 0){
      printf("%i\n",i);
    }
  }
}
//34
// n 以下の 7 の倍数をプリントする関数
void sevens_p(int n){
  for (int i = 1; i <= n; i++){
    if (i % 7 == 0){
      printf("%i\n",i);
    }
  }
}

//35
//m 以上、n 以下の 7 の倍数をプリントする関数
void sevens_between_p(int m, int n){
  for (int i = m; i <= n; i++){
    if (i % 7 == 0){
      printf("%i\n",i);
    }
  }
}
//36
//m 以上、n 以下の k の倍数をプリントする関数 
void between_p(int m, int n, int k){
  for (int i = m; i <= n; i++){
    if (i % k == 0){
      printf("%i\n",i);
    }
  }
}
//37
//整数 n の 2 乗を戻り値とする関数
int square(int n){
  return n*n;
}

//38
//整数 n の 3 乗を戻り値とする関数
int triple(int n){
  return square(n)*n;
}

//39
//整数 n の m 乗を返す関数
int power(int n, int m){
  int ans = 1;
  for (int i = 0; i < m; i++){
    ans *= n;
  }
  return ans;
}
//40
//1~20 の各整数についてその2乗をプリントする関数
void squares_p(void){
  for (int i = 1; i <= 20; i++){
    printf("%i\n",square(i));
    }
}
//41
//整数 n のルートを超えない最大の整数を返す関数
int root(int n){
  int ans = 0;
  for (int i = 1; square(i) <= n; i++){
    ans = i;
  }
  return ans;
}

//42
//つの整数を引数とし、 それらの長さを各辺とする三角形がありうるかどうかを判定する関数
int triangle(int x, int y, int z) {
  return x + y > z && y + z > x && z + x > y;
}
//43
//3つの整数を引数とし、 それらの長さを各辺とする直角三角形がありうるかどうかを判定する関数
int normal(int x, int y, int z){
  if (max3(x*x, y*y, z*z) == x*x + y*y + z*z - max3(x*x, y*y, z*z)){
    return 1;
  }else {
    return 0;
  }
}
//44
//整数 n を引数とし、それが 3 の倍数だったら1、5 の倍数だったら 2、 3 の倍数でもあり、かつ、5 の倍数でもあったら 3、 いずれでもなかったら 0 を返す関数
int fz(int n){
  if (n == 0){
    return 0;
  }
  if (n % 3 == 0 && n % 5 == 0){
    return 3;
  }else if (n % 3 == 0){
    return 1;
  }else if (n % 5 == 0){
    return 2;
  }else {
    return 0;
  }
}
//45
//10以下の整数のうち、もっとも約数の多い数を返す関数
int most_divisors10(void){
  int most,ans = 0;
  int count[10] = {};
  for (int a = 1; a <= 10; a++){
    for (int i = 1; i <= 10; i++){
      if (divide(a,i)){
        count[a - 1]++;
      }
    }
  }
  for (int i = 0; i < 9; i++){
    most = max2(count[i],count[i+1]);
  }
  for (int i = 0; i < 9; i++){
    if (most == count[i]){
      ans = i + 1;
    }
  }
  return ans;
}
//46
//n 以下の整数のうち、もっとも約数の多い数を返す関数
int most_divisors(int n){
  int most,ans = 0;
  int count[n];
  for (int a = 1; a <= n; a++){
    for (int i = 1; i <= n; i++){
      if (divide(a,i)){
        count[a - 1]++;
      }
    }
  }
  for (int i = 0; i < n - 1; i++){
    most = max2(count[i],count[i+1]);
  }
  for (int i = 0; i < n; i++){
    if (most == count[i]){
      ans = i + 1;
    }
  }
  return ans;
}
//47
//3桁の整数 n の各桁の総和を返す関数
int sum_of_digits3(int n){
  int a[3] = {};
  a[0] = n / 100;
  a[1] = (n / 10) % 10;
  a[2] = n % 10;

  return a[0] + a[1] + a[2];
}

//48
//整数 n の各桁の総和を返す関数
int sum_of_digits(int n){
  int dig,sum = 0;
  while (n){
    dig = n % 10;
    sum += dig;
    n /= 10;
  }
  return sum;
}
//49
//整数 n から m までの総和を求める関数
int sum(int n, int m){
  int sum = 0;
  for (int i = n; i <= m; i++){
    sum += i;
  }
  return sum;
}
//50
//正の整数 n から m までの整数の積を求める関数
int product(int n, int m){
  int ans = 1;
  for (int i = n; i <= m; i++){
    ans *= i;
  }
  return ans;
}

//51
//整数 n の絶対値を返す関数
int abs(int n){
  if (n < 0){
    n *= -1;
  }
  return n;
}
//52
// 整数 n が 0 だったら真、それ以外だったら偽を返す関数 
int zero(int n){
  if (n == 0){
    return 1;
  }else {
    return 0;
  }
}
//53
//彼・彼女の年齢を y とする。彼・彼女がティーンエイジャーだったら 真、そうでなければ偽を返す関数
int teenage(int y){
	return y > 12 && y < 20;
}
//54
//float x を四捨五入した int を返す関数
int f_to_i(float x){
  float a = 0;
  a = x - (int)x;
  if (a >= 0.5 || a <= -0.5){
    if (x >= 0){
      return (int)x + 1;
    } else {
      return (int)x - 1;
    }
  } else {
    return (int)x;
  }
}
//55
//float x を小数点第 2 位で四捨五入した float を返す関数
float f_to_f1(float x){
  float a = 0.0;
  a = x * 10 + 0.5;
  return (int)a / 10.0;
}
//56
// float x を小数点第 n 位で四捨五入した float を返す関数 
float f_to_f(float x, int n){
  float a = 0.0;
  a = x * power(10, n - 1) + 0.5;
  return (int)a / (float)power(10, n - 1);
}
//57
//関数 long random(void) を呼ぶとすごく大きい整数乱数が返ってくる。 random( ) を利用し、10未満の乱数を10個、プリントする関数
void rand10_p(void){
  for (int i = 0; i < 10; i++){
    printf("%ld\n",random()%10);
  }
}
//58
//0 以上 n 未満の正の整数乱数を返す関数
int rand_n(int n){
  return random() % n;
}
//59
//-10 から 10 までの整数乱数を返す関数
int rand10(void) {
  return random() % 21 - 10;
}
//60
//n ≤ r < m の整数乱数を返す関数
int rand_between(int n, int m){
  return rand_n(m - n) + n;
}
//61
//0.0 ≤ r < 1.0 の浮動小数点数乱数を返す関数
float randf(void){
  return (float)rand() / RAND_MAX;
}
//62
//上の randf( ) を呼び出して、2次元乱数 [x, y] (0.0 ≤ x < 1.0, 0.0 ≤ y < 1.0) を n 個プリントする関数
void randf_p(int n){
  for (int i = 0; i < n; i++){
    printf("[%f,%f]\n",randf(),randf());
  }
}
//63
//上の randf_p( ) を応用し、円周率を求める関数
float pi(int n){
  float x, y = 0.0;
  int count = 0;
  for (int i = 0; i < n; i++){
    x = randf();
    y = randf();
    if (x * x + y * y <= 1){
      count++;
    }
  }
  return 4.0 * count / n;
}
//64
//ファイル "/home/t/hkimura/integers.txt" には一行にひとつ、整数が書き込まれている。そのファイルの先頭の数字を返す関数
int head0(void){
	FILE* fp;
	int s;
	fp = fopen("/home/t/hkimura/integers.txt","r");
	fscanf(fp, "%i", &s);
	fclose(fp);
	return s;
}
//65
// ファイル "/home/t/hkimura/integers.txt" が何行あるかを返す関数
int lines0(void){
  FILE *fp;
  char buf[100];
  int line = 0;
 
  if ((fp = fopen("/home/t/hkimura/integers.txt", "r")) == NULL) {
    return -1;
  }
 
  while (fgets(buf, 100, fp) != NULL) {
    line++;
  }
 
  return line;
}
//66
//ファイル "/home/t/hkimura/integers.txt" の n 行目の数字を返す関数
int nth0(int n){
	FILE* fp;
	int s;
	fp = fopen("/home/t/hkimura/integers.txt","r");
	for (int i = 1; i < n; i++) {
		fscanf(fp, "%i", &s);	
	}
	fscanf(fp, "%i", &s);
	fclose(fp);
	return s;
}
//67
//int nth0(int n) はもし、n がファイル "/home/t/hkimura/integers.txt" の最大行を超えているとプログラムが実行時エラーになる。実行時エラーを出さずに、"最大行を超えています\n"を表示し、戻り値 -1 を返すように改良した
int nth1(int n){
	if (n > lines0()) {
		printf("最大行を超えています\n");
		return -1;
	} else {
		return nth0(n);
	}
}
//68
//ファイル "/home/t/hkimura/integers.txt" の最初の十行に含まれる整数の総和を返す関数 
int sum10(void){
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += nth1(i + 1);
	}
	return sum;
}
//69
//ファイル "/home/t/hkimura/integers.txt" の最初の n 行に含まれる整数の総和を返す関数 
int sum_n(int n){
	int i,sum = 0;
	for (i = 0; i < n; i++) {
		sum += nth1(i + 1);
	}
	return sum;
}
//70
//ファイル "/home/t/hkimura/integers.txt" の最後の n 行に含まれる整数の総和を返す関数 
int sum_tail(int n){
	int i,sum = 0;
	for (i = 0; i < n; i++) {
		sum += nth1(lines0() - i);
	}
	return sum;
}
//71
// n よりも大きい完全数はなにか？を求める関数
int next_perfect(int n){
  int i = n + 1;
  while (is_perfect(i) == 0){
    i++;
  }
  return i;
}
//72
//n 以上 m 未満の奇数の和を求める関数
int sum_odds(int n, int m){
  int sum = 0;
  for (int i = n; i < m; i++){
    if(i % 2 == 1){
      sum += i;
    }
  }
  return sum;
}
//73
//n 未満の素数の和を求める関数
int sum_primes_under(int n){
  int sum = 0;
  for (int i = 2; i < n; i++){
    if (is_prime(i)){
      sum += i;
    }
  }
  return sum;
}
//74
//n 以上 m 未満の素数の和を求める関数
int sum_primes_between(int n, int m){
  int sum = 0;
  for (int i = n; i < m; i++){
    if (is_prime(i)){
      sum += i;
    }
  }
  return sum;
}
//75
//関数 int factorial(int n) を定義せよ
int factorial(int n){
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}
//76
// factorial(0), factorial(1), factorial(2)... と次々に計算していき、factorial(n) < 0 となる最初の n を求める関数
int factorial_overflow(void){
  for (int i = 0;;i++) {
    if (factorial(i) < 0) {
      return i;
    }
  }
}
//77
//関数 int fibo(int n) を定義せよ。fibo(0)=0, fibo(1)=1, fibo(2)=1で、一般にfibo(n) = fibo(n-1) + fibo(n-2).
int fibo(int n){
  int a = 0;
  int c = 0;
  int b = 1;
  if (n == 0) {
    return 0;
  } else {
    for (int i = 0; i < n - 2; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
}
//78
//fibo(n) が最初に 1,000 を超える n はいくらかを求める関数
int fibo_over1000(void){
  int i = 0;
  for (i = 0;;i++ ) {
    if (fibo(i) > 1000) {
      return i - 1;
    }
  }
}
//79
//fibo(n) が最初に m を超える n を返す関数
int fibo_over(int m){
  int i = 0;
  for (i = 0;;i++ ) {
    if (fibo(i) > m) {
      return i - 1;
    }
  }
}
//80
//n 以上 m 未満となるフィボナッチ数の総和を返す関数
int sum_of_fibo_between(int n, int m){
  int sum = 0;
  int i = 0;
  for (i = fibo_over(n); i < fibo_over(m); i++) {
    sum += fibo(i);
  }
  return sum;
}
//81
//（テキスト文字列参照）文字列 s の長さを返す関数
int str_len(char s[]) {
    int i;

    for (i = 0; s[i] != '\0'; i++) {

    }
    return i;
}
//82
//文字列 s に含まれる文字 c の数を返す関数
int count_chars(char str[], char c) {
    int i;
    int count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}
//83
//文字列 s1 と文字列 s2 が等しいかどうかを判定する関数
int str_eql(char s1[], char s2[]) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
    if (s1[i] != s2[i]) {
      return 0;
    }
  }
  return s1[i] == s2[i];
}
//84
//二つの文字列 s1, s2 の先頭の n 文字が等しいかどうかを判定する関数
int str_eql_n(char s1[], char s2[], int n) {
  int i;

  for (i = 0; i < n; i++) {
    if (s1[i] != s2[i]) {
      return 0;
    }
  }
  return 1;
}
//85
//文字列 s1 を文字列 s2 にコピーする関数
void str_copy(char s1[], char s2[]){
  int i = 0;
  for (i = 0; s1[i] != '\0'; i++) {
    s2[i] = s1[i];
  }
  s2[i] = '\0';
}
//86
//文字列 s1 の後ろに文字列 s2 を連結する関数
void str_append(char s1[], char s2[]) {
  int i;
  for (i = 0; s1[i] != '\0'; i++) {
  }
  s1[i] = ' ';
  int j;
  for (j = 0; s2[j] != '\0'; j++) {
    s1[i + 1] = s2[j];
    i++;
  }
  s1[i + 1] = '\0';
}
//87
//文字列 s1 の n 文字目からの m 文字を s2 の先頭にコピーする関数
void str_take(char s1[], int n, int m, char s2[]){
  int i;
  int j = 0;
  if(str_len(s1) < n){
    printf("error!");
    return;
  }
  for (i = n - 1; i < n + m - 1; i++) {
      s2[j] = s1[i];
    if (s1[i] == '\0') {
      break;
    } else {
      j++;
    }
  }
}
//88
//文字列 s1 中に文字列 s2 が出現するかどうかを判定する関数
int str_search(char s1[], char s2[]){
  int i,j = 0;
  char buf[100];
  for (i = 0; s1[i] != '\0'; i++) {
    buf[i] = s1[i];
  }
  buf[i] = '\0';
  for (i = 0; buf[i] != '\0'; i++) {
    if (str_eql_n(buf, s2, str_len(s2))) {
      return i + 1;
    }
    for (j = 0; buf[j] != '\0'; j++) {
      buf[j] = s1[j + i + 1];
    }
    buf[j] = '\0';
  }
  return -1;
}
//89
//文字列 s1 の n 文字目からの m 文字を削除する
void str_remove(char s1[], int n, int m){
  int i = 0;
  for (i = n + m - 1; s1[i] != '\0'; i++) {
    s1[i - m] = s1[i];
  }
  s1[i - m] = '\0';
}
//90
//文字列 s1 中に文字列 s2 が見つかる場合、s1 から s2 を削除する
void str_remove_str(char s1[], char s2[]){
  if (str_search(s1, s2) != -1) {
  str_remove(s1, str_search(s1, s2), str_len(s2));
  }
}
//91
// 文字列 s1 の n 文字目に文字列 s2 を挿入する
void str_insert(char s1[], int n, char s2[]){
  int i,j = 0;
  char buf[100];
  for (i = n; s1[i] != '\0'; i++) {
    buf[j] = s1[i];
    j++;
  }
  buf[j] = '\0';
  j = 0;
  for (i = n; s2[j] != '\0'; i++) {
    s1[i] = s2[j];
    j++;
  }
  j = 0;
  for (;buf[j] != '\0'; i++) {
    s1[i] = buf[j];
    j++;
  }
  s1[i] = '\0';
}
//92
//文字列 s1 中に現れる文字列 s2 を文字列 s3 で置き換える
void str_subst(char s1[], char s2[], char s3[]){
  if (str_search(s1, s2) != -1) {
      int i = str_search(s1, s2) - 1;
      str_remove_str(s1, s2);
      str_insert(s1, i, s3);
  }
}
//93
//文字列 s1 を全て大文字にして文字列s2にコピーする関数
void toUpper(char s1[], char s2[]){
  int i = 0;
  for (i = 0; s1[i] != '\0'; i++) {
    s2[i] = s1[i] - 0x20;
  }
  s2[i] = '\0';
}
//94
//文字列 s1 を整数に変換して返す関数 
int str_to_int(char s1[]){
  return atoi(s1);
}
//95
//文字列 s1 を逆にした文字列 s2 を作る関数
void str_reverse(char s1[], char s2[]){
  int i,j = 0;
  for (i = str_len(s1) - 1; i >= 0; i--) {
    s2[j] = s1[i];
    j++;
  }
  s2[j] = '\0';
}
//96
//整数 n を文字列 s に変換する関数
void int_to_str(int n, char s[]){
  sprintf(s, "%d", n);
}
//97
//サイズ n の整数配列 a[ ] に 0 ~ 99 の乱数をセットする関数
void init_randoms_99(int a[] , int n){
  for (int i = 0; i < n - 1; i++) {
    a[i] = rand()%100;
    printf("%i\n",a[i]);
  }
}
//98
// 97 で作った乱数配列 a[ ] を要素の大きさ順に並べ替え、b[ ] にセットする関数
void sort(int a[], int b[], int n){
  int i,j,k = 0;
  for (i = 99; i >= 0; i--) {
    for (j = 0; j < n; j++) {
      if (i == a[j]) {
        b[k] = a[j];
        k++;
      }
    }
  }
}
//99
//98 で並べ替えた配列 b[ ] がまじで要素順になっているかを確認する関数
int is_sorted(int b[], int n){
  for (int j = 0; j < n - 1; j++) {
    if (b[j] < b[j + 1]) {
      return -1;
    }
  }
  return 1;
}
//100
// (おまけ) 整数 n が平方数であるかどうかを判定する関数 
int is_square(int n){
	if (n == square(root(n))) {
		return 1;
	} else {
	 	return -1;
	}
}
//101
// (おまけ) 216を超えない最大の素数は何か？ それは 65521.
int one_h(void){
	int i = power(2, 16);
	for (;; i--) {
		if (is_prime(i) == 1) {
			return i;
		}
	}
}
//102
// (おまけ) 231-1を超えない最大の素数は何か？ それはきっと 2147483647.
int one_h2(void){
  int i = power(2, 31) - 1;
  for (;; i--) {
    if (is_prime(i) == 1) {
      return i;
    }
  }
}
//103
//(おまけ) 4番目までの素数を足すと 2+3+5+7=17. 1000 番目までの素数の和を求めなさい。それはたぶん 3682913.
int sum_primes1000(void){
  int count = 0;
  int i = 2;
  int sum = 0;
  while (count < 1000) {
    if (is_prime(i)) {
      sum += i;
      count++;
    }
    i++;
  }
  return sum;
}
//104
//(おまけ) 10000未満の素数 p1, p2, p3 で、p12+p22=p32 を満たすものはあるでしょうか？
int one_h4(void){
  int p[10000] = {};
  int j = 0;
  for (int i = 2; i < 10000; i++){
    if (is_prime(i)){
      p[j] = i;
      j++;
    }
  }
  for (int a = 0; a < prime(10000); a++) {
    for (int b = 0; b < prime(10000); b++) {
      for (int c = 0; c < prime(10000); c++) {
        if (square(p[a]) + square(p[b]) == square(p[c])) {
          printf("p1:%d p2:%d p3:%d\n", p[a], p[b], p[c]);
          return 1;
        }
      }
    }
  }
  return 0;
}
//105
//2520 は 1 から 10 の数字のすべての整数で割り切れる最小の整数である。1 から 20 までの整数すべてで割り切れる最小の整数は何か？(Project Euler の 5 番)

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

//106
//（96 と被ったので新しいのと入れ替え）整数 n がハッピー数かどうかを判定する関数 int happy(int n). 2018 はハッピー数ではない。2019 はハッピー数。
int get_digit_for_happy(int arg){
  int digit = 0;
  while (arg != 0) {
    arg /= 10;
    digit++;
  }
  return digit;
}

int happy(int n){
  for (;;){
    int digit = get_digit_for_happy(n);
    int a[20] = {};
    for (int i = 0; i < digit; i++) {
      a[i] = n / power(10, i) % 10;
    }
    n = 0;
    for (int i = 0; i < digit; i++) {
      n += square(a[i]);
    }
    if (n == 1){
      return 1;
    } else if (n < 10) {
      break;
    }
  }
  return 0;
}
//107
//左右どちらから読んでも同じ値になる数を回文数という。2桁の数の積で表される回文数のうち、最大のものは 9009 = 91 × 99 である。3桁の数の積で表される回文数の最大値を求めよ。きっとそれは 888888 ではない。(Project Euler 4番)


int kaibun_for_pe4(int n) {
  int digit = get_digit_for_happy(n);
  int a[11] = {};
  int sum = 0;
  for (int i = 0; i < digit; i++) {
    a[i] = n / power(10, i) % 10;
    sum += a[i] * power(10, digit - i - 1);
  }
  return sum == n;
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

//ans: 913 * 993 = 906609

//108
//600851475143 の素因数のうち最大のものを求めよ。きっとそれは 6000 よりも大きい。(Project Euler の3番)
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

//109
//hkimura の回答を改善しなさい
int next_prime(int n) {
  n++;
  if (even(n)) {
    n++;
  }
  for (; ! is_prime(n); n+=2) {
    ;
  }
  return n;
}

int factor_integer_max(long int n) {
  int p = 2;
  int max = 1;

  for (;;) {
    if (n % p == 0) {
      max = p;
      n /= p;
    }
//変更点
    else {
      p = next_prime(p); // 上で定義
      if (n == 1) {
        break;
      }
    }
//ここまで
  }
  return max;
}

//110
//問題48のint sum_of_digits(int n) をできるだけ、{} や変数を使わずに書け
//悪ふざけ
int saving(int n){
  return sum_of_digits(n);
}
//正答
int abc(int n) {
  return n>0?n%10+sum_of_digits(n/10):0;
}

//111
//n,m ≥ 0 とする。n * m と同じ計算をする関数
int times(int n, int m){
  int ans = 0;
  while (m > 0) {
    ans += n;
    m--;
  }
  return ans;
}
//正答
int times_1(int n, int m) {
  if (m==0) {
    return 0;
  } else {
    return n + times(n, m-1);
  }
}

//112
//++ と -- のみを使い、x + y と同じ計算をする関数
int add(int x, int y){
  int sum = 0;
  for (; x > 0; x--) {
    sum++;
  }
  for (; y > 0; y--) {
    sum++;
  }
  return sum;
}

//113
// + や * を使わず、n * 2 と同じ計算をする関数
int doubles(int n){
  int ans = 0;
  for (int i = 2; i > 0; i--) {
    ans -= n;
  }
  return ans / -1;
}
//シフト演算子を用いる
int shift(int n){
  return n<<1;
}

//114
//+ や * を使わず,n * 10 と同じ計算をする関数
int ten(int n){
  return (n / (0.1));
}
//ko-sei案
int ten_1(unsigned n){
  unsigned b = n;
  b <<= 10;
  return b / 100;
}

//115
//+ や * を使わず,n * 100 と同じ計算をする関数
int hundred(int n){
  return (n / (0.01));
}



int main(void) {
    return 0;
}

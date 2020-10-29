#include <stdio.h>

long long int a[1000000];

int gcd(int b, int c) {
  if (c == 0) {
    return b;
  } else {
    return gcd(c, b % c);
  }
}

long long int lcm(long long int a[], int n) {
  long long int answer = a[0];
  for (int i = 0; i < n; i++) {
    answer = (a[i] * answer) / (gcd(a[i], answer));
  }
  return answer;
}


int main() {
  int n = 0;
  while (scanf("%lld", &a[n]) != EOF) {
    n++;
  }
  printf("%lld", lcm(a, n));
}

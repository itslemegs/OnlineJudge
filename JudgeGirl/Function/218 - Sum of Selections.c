#include <stdio.h>

int result[16];

long long int factorial (long long int num) {
  if (num == 0) {
    return 1;
  }
  return num * factorial (num - 1);
}

void combination (int index, int n) {
  result[index] = factorial (n) / (factorial (index) * factorial(n - index));
}

int main() {
  int N, m, final = 0;
  scanf("%d %d", &N, &m);
  for (int i = 0; i <= m; i++) {
    combination (i, N);
  }
  for (int i = 0; i <= m; i++) {
    final += result[i];
  }
  printf("%d", final);
  return 0;
}

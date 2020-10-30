#include <stdio.h>

int main() {
  int x, a, b, c;
  scanf("%d", &x);
  c = x % 10;
  x = x / 10;
  b = x % 10;
  x = x / 10;
  a = x % 10;
  printf("%d\n%d\n%d", a, b, c);
  return 0;
}

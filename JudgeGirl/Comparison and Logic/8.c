#include <stdio.h>
#include <stdbool.h>

int main() {
  int a, b, c;
  scanf("%d\n%d\n%d", &a, &b, &c);
  bool x = ((a + b) > c && (c + b) > a && (a + c) > b);
  printf("%d", x);
  return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main() {
  int x;
  scanf("%d", &x);
  bool y = (x % 3 != 0 || x % 5 != 0 || x % 7 == 0);
  printf("%d", y);
  return 0;
}

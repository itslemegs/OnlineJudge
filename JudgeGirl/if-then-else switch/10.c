#include <stdio.h>

int main() {
  int n, i, power = 1;
  scanf("%d\n%d", &n, &i);
  for (int j = 0; j < i; j++) {
    power *= n;
  }
  printf("%d", power);
  return 0;
}

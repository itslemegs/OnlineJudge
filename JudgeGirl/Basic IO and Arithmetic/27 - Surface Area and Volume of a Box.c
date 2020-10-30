#include <stdio.h>

int main() {
  int a, b, c, d, e, area, volume;
  scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
  area = 2 * (a * b + a * c + b * c) + 8 * d * ((a - 2 * e) + (c - 2 * e) + (b - 2 * e));
  volume = (a * b * c) - 2 * d * ((a - 2 * e) * (c - 2 * e) + (b - 2 * e) * (c - 2 * e) + (a - 2 * e) * (b - 2 * e));
  printf("%d\n%d", area, volume);
  return 0;
}

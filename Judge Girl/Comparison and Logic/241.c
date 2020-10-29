#include <stdio.h>
#include <stdbool.h>

int main() {
  int a, b, c, d, e, f, g, h;
  scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
  bool origin = ((a * d - b * c) > 0 && (b * g - a * h) > 0 && (c * f - d * e) > 0 && (e * h - f * g) > 0);
  printf("%d\n", origin);
  return 0;
}

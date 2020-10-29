#include <stdio.h>

int main() {
  int s, f, t, chicken, rabbit, crab;
  scanf("%d\n%d\n%d", &s, &f, &t);
  crab = s - t;
  rabbit = (f - 8 * crab) / 2 - t;
  chicken = s - (rabbit + crab);
  printf("%d\n%d\n%d", chicken, rabbit, crab);
  return 0;
}

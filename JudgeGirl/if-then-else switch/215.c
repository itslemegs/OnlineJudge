#include <stdio.h>
#include <stdbool.h>

int main() {
  int s, f, t, chicken, rabbit, crab;
  scanf("%d%d%d", &s, &f, &t);
  crab = s - t;
  rabbit = (f - 8 * crab) / 2 - t;
  chicken = s - (rabbit + crab);
  bool valid;
  if (chicken >= 0 && rabbit >= 0 && crab >= 0 && ((f - 8 * crab) % 2) == 0) {
    valid = true;
    printf("%d\n%d\n%d", chicken, rabbit, crab);
  } else {
    valid = false;
    printf("0");
  }
  return 0;
}

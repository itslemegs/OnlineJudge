#include <stdio.h>

int main() {
  int h, w, d, area, volume;
  scanf("%d\n%d\n%d", &h, &w, &d);
  area = 2 * (h * w + h * d + w * d);
  volume = h * w * d;
  printf("%d\n%d", area, volume);
  return 0;
}

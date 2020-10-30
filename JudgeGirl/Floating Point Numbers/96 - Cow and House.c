#include <stdio.h>

int main() {
  double a, b, c, area;
  scanf("%lf %lf %lf", &a, &b, &c);

  if (c < a && c < b) {
    area = 0.75 * 3.1415926 * c * c;
  } else if (c < a && c > b) {
    area = 0.75 * 3.1415926 * c * c + 0.25 * 3.1415926 * (c - b) * (c - b);
  } else if (c > a && c < b) {
    area = 0.75 * 3.1415926 * c * c + 0.25 * 3.1415926 * (c - a) * (c - a);
  } else {
    area = 0.75 * 3.1415926 * c * c + 0.25 * 3.1415926 * (c - a) * (c - a) + 0.25 * 3.1415926 * (c - b) * (c - b);
  }
  printf("%f", area);
  return 0;
}

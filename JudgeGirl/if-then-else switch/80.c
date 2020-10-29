#include <stdio.h>

int main() {
  int n, x1, x2, x3, y1, y2, y3, a, b, c;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    a = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1);
    b = (x3-x2) * (x3-x2) + (y3-y2) * (y3-y2);
    c = (x1-x3) * (x1-x3) + (y1-y3) * (y1-y3);
    if (a == b || b == c || c == a) {
      printf("isosceles\n");
    } else if ((a + b) == c || (a + c) == b || (c + b) == a) {
      printf("right\n");
    } else if ((a + b) < c || (a + c) < b || (c + b) < a) {
      printf("obtuse\n");
    } else {
      printf("acute\n");
    }
  }
  return 0;
}

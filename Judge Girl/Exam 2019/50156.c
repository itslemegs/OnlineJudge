#include <stdio.h>

int main() {
  int a, b, v, w, x, y, z, d, p1, p2, p3;
  float dr2, dr3, highest2 = 0, highest3 = 0;
  scanf("%d%d%d%d%d%d%d", &a, &b, &v, &w, &x, &y, &z);
  for (int i = a; i < b; i++) {
    if (i % 2 != 0) {
      d = v;
    } else {
      d = w;
    }
    dr2 = d / i;
    if (highest2 < dr2) {
      highest2 = dr2;
      p2 = i;
    }
  }
  for (int i = b; i < (2 * b); i++) {
    if (i % 3 == 0) {
      d = x;
    } else if (i % 3 == 1) {
      d = y;
    } else {
      d = z;
    }
    dr3 = d / i;
    if (highest3 < dr3) {
      highest3 = dr3;
      p3 = i;
    }
  }
  if (highest2 > highest3) {
    printf("%d\n", p3);
  } else if (highest2 < highest3) {
    printf("%d\n", p2);
  }
  return 0;
}

#include <stdio.h>

int main() {
  int n, j;
  scanf("%d", &n);
  int k = 0, l = 0, m = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &j);
    if (j % 3 == 0) {
      k += 1;
    } else {
      k += 0;
    }
    if (j % 3 == 1) {
      l += 1;
    } else {
      l += 0;
    }
    if (j % 3 == 2) {
      m += 1;
    } else {
      m += 0;
    }
  }
    printf("%d %d %d", k, l, m);
    return 0;
}

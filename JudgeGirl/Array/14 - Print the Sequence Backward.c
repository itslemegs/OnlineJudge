#include <stdio.h>

int main() {
  int n;
  scanf("%d\n", &n);
  int m = n - 1;
  int a[n];
  for (int k = 0; k < n; k++) {
    scanf("%d", &a[k]);
  }
  for (int i = m; i >= 0; i--) {
      if (i != 0) {
        printf("%d ", a[i]);
      } else {
        printf("%d", a[i]);
      }
  }
  return 0;
}

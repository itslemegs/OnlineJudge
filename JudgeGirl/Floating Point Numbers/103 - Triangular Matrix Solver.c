#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  double arr[16][16];
  int i, j, k;
  double y[16];
  double x[16];

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%lf", &arr[i][j]);
    }
  }
  for (k = 0; k < n; k++) {
    scanf("%lf", &y[k]);
  }
  for (i = n-1; i >= 0; i--) {
    for (j = n-1; j >= 0; j--) {
      if (j != i) {
        y[i] -= arr[i][j] * x[j];
      } else {
        x[i] = y[i] / arr[i][j];
      }
    }
  }
  for (i = 0; i < n; i++) {
    printf("%f\n", x[i]);
  }
  return 0;
}

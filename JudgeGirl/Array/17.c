#include <stdio.h>
int a[100][100], sum[100];
int main() {
  int r, c, i, j, average = 0;
  scanf("%d %d", &r, &c);
  for (i = 0; i < r; i ++) {
    for (j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < c; i++) {
    for (j = 0; j < r; j++) {
      sum[i] += a[j][i];
    }
    average = sum[i] / r;
    printf("%d\n", average);
  }
  return 0;
}

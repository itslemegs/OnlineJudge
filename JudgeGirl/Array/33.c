#include <stdio.h>

int main() {
  int n, count = 0;
  scanf("%d", &n);
  int a[n][n], sum, cross = 0, t = 0, turn = 0, dead = 0, sumi, sumj;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum = 0;
      sumi = 0;
      sumj = 0;
      if(a[i][j] == 1) {
        if (i != 0)
          if (a[i-1][j] == 1)
            sumi += 1;
        if (i != n-1)
          if (a[i+1][j] == 1)
            sumi += 1;
        if (j != 0)
          if (a[i][j-1] == 1)
            sumj += 1;
        if (j != n-1)
          if (a[i][j+1] == 1)
            sumj += 1;
        sum = sumi + sumj;

        if (sum == 1)
          dead += 1;
        else if (sum == 3) {
          t += 1;
        }
        else if (sum == 4)
          cross +=1;
        else if (sum == 2)
          if (sumi == 1)
            turn +=1;

      }
    }
  }
    printf("%d\n", cross);
    printf("%d\n", t);
    printf("%d\n", turn);
    printf("%d\n", dead);
    return 0;
}

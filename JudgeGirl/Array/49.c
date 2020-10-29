#include <stdio.h>

int num[1000][10000], count[1000], sum[1000], minimum[1000], maximum[1000], temp;

int main() {
  int N, m, i, j;
  scanf("%d %d", &N, &m);

  for (i = 0; i < m; i++) {
    sum[i] = count[i] = 0;
    minimum[i] = 2147483647;
    maximum[i] = 0;
  }
  for (i = 0; i < N; i++) {
    scanf("%d", &temp);
    int pos = temp % m;
    num[pos][count[pos]] = temp;
    count[pos]++;
  }

  for (i = 0; i < m; i++) { // for each row
    for (j = 0; j < count[i]; j++) { // each num in row
      sum[i] += num[i][j];
      if (num[i][j] > maximum[i]) {
        maximum[i] = num[i][j];
      }
      if (num[i][j] < minimum[i]) {
        minimum[i] = num[i][j];
      }
    }
  }
  for (i = 0; i < m; i++) {
    printf("%d %d %d\n", sum[i], maximum[i], minimum[i]);
  }
  return 0;
}

#include <stdio.h>

int array[100][100];

int r, c;

int main() {
  scanf("%d %d", &r, &c);
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &array[i][j]);
    }
  }
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (i == 0) {
        if (j == 0) {
          if (array[i][j] > array[i][j + 1] && array[i][j] > array[i + 1][j]) {
            printf("%d\n", array[i][j]);
          }
        } else if (j == (c - 1)) {
          if (array[i][j] > array[i][j - 1] && array[i][j] > array[i + 1][j]) {
            printf("%d\n", array[i][j]);
          }
        } else {
          if (array[i][j] > array[i][j - 1] && array[i][j] > array[i][j + 1] && array[i][j] > array[i + 1][j]) {
            printf("%d\n", array[i][j]);
          }
        }
      } else if (i == (r - 1)) {
        if (j == 0) {
          if (array[i][j] > array[i][j + 1] && array[i][j] > array[i - 1][j]) {
            printf("%d\n", array[i][j]);
          }
        } else if (j == (c - 1)) {
          if (array[i][j] > array[i][j - 1] && array[i][j] > array[i - 1][j]) {
            printf("%d\n", array[i][j]);
          }
        } else {
          if (array[i][j] > array[i][j - 1] && array[i][j] > array[i][j + 1] && array[i][j] > array[i - 1][j]) {
            printf("%d\n", array[i][j]);
          }
        }
      } else {
        if (array[i][j] > array[i][j - 1] && array[i][j] > array[i][j + 1] && array[i][j] > array[i - 1][j] && array[i][j] > array[i + 1][j]) {
          printf("%d\n", array[i][j]);
        }
      }
    }
  }
  return 0;
}

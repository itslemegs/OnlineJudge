#include "max.h"
int max(int array[5][5]) {
  int i, j, maximum = -10000;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (array[i][j] > maximum) {
        maximum = array[i][j];
      }
    }
  }
  return maximum;
}

#include "intersection.h"

void intersection(int map[100][100], int result[4]) {
  int sum, sumi, sumj;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      sum = 0;
      sumi = 0;
      sumj = 0;
      if(map[i][j] == 1) {
        if (i != 0)
          if (map[i-1][j] == 1)
            sumi += 1;
        if (i != 99)
          if (map[i+1][j] == 1)
            sumi += 1;
        if (j != 0)
          if (map[i][j-1] == 1)
            sumj += 1;
        if (j != 99)
          if (map[i][j+1] == 1)
            sumj += 1;
        sum = sumi + sumj;

        if (sum == 1)
          result[3] += 1;
        else if (sum == 3) {
          result[1] += 1;
        }
        else if (sum == 4)
          result[0] +=1;
        else if (sum == 2)
          if (sumi == 1)
            result[2] +=1;
      }
    }
  }
}

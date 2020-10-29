#include <stdio.h>

void posneg(int array[5][5], int results[2]) {
  int i, j;
  int pos = 0;
  int neg = 0;

  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
      if (array[i][j] > 0)
	pos++;
      else if (array[i][j] < 0)
	neg++;

  results[0] = neg;
  results[1] = pos;

  return;
}

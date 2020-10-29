#include <stdio.h>
int first[100], second[100], prod[200];
int main() {
  int one, two, i, j, size;
  scanf("%d", &one);
  for (i = 0; i < one; i++) {
    scanf("%d", &first[i]);
  }
  scanf("%d", &two);
  for (i = 0; i < two; i++) {
    scanf("%d", &second[i]);
  }
  for (i = 0; i < one; i++) {
    for (j = 0; j < two; j++) {
      if (first[i] != 0 && second[j] != 0) {
        prod[i + j] += first[i] * second[j];
      }
    }
  }
  size = one + two - 2;
  for (i = 0; i < size; i++) {
    printf("%d ", prod[i]);
  } printf("%d", prod[size]);
  return 0;
}

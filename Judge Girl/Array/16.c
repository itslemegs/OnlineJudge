#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  int num[n], i, even[n], odd[n], countEven = 0, countOdd = 0;
  for (i = 0; i < n; i++) {
    scanf("%d", &num[i]);
  }
  for (i = 0; i < n; i++) {
    if (num[i] % 2 == 0) {
      even[countEven] = num[i];
      countEven++;
    }
    if (num[i] % 2 == 1) {
      odd[countOdd] = num[i];
      countOdd++;
    }
  }
  for (i = 0; i < countOdd - 1; i++) {
    printf("%d ", odd[i]);
  } printf("%d\n", odd[countOdd - 1]);
  for (i = 0; i < countEven - 1; i++) {
    printf("%d ", even[i]);
  } printf("%d\n", even[countEven - 1]);

  return 0;
}

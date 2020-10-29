#include <stdio.h>
#include <math.h>

int root[3];

int poly(double x, int a, int b, int c) {
  double result = pow(x, 3) + a * pow(x, 2) + b * x + c;
  return result;
}

void swap(int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void bisection(int mid, int a, int b, int c, int high, int low) {
  if (poly(mid, a, b, c) < 0) {
    high = mid;
    mid = (high + low) / 2;
  } else {
    low = mid;
    mid = (high + low) / 2;
  }
}

int main() {
  int a, b, c;
  double i = 0;
  scanf("%d %d %d", &a, &b, &c);
  int high = 100000, low = -100000, mid, j = 0;
  mid = (high + low) / 2;
  while (j < 3) {
    if (poly(mid, a, b, c) == 0) {
      root[j] = -mid;
      j++;
      bisection(mid, a, b, c, high, low);
    } else if (poly(-mid, a, b, c) == 0) {
      root[j] = mid;
      j++;
      bisection(mid, a, b, c, high, low);
    }
  }
  if (root[0] > root[1]) {
    swap(root[0], root[1]);
  } else if (root[0] > root[2]){
    swap(root[0], root[2]);
  } else if (root[1] > root[2]) {
    swap(root[1], root[2]);
  }
  printf("%d %d %d", root[0], root[1], root[2]);
  return 0;
}

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int a, b, c, d, e, f, g;

    int count = 0;

    a = M / 1000000;
    b = (M % 1000000) / 100000;
    c = ((M % 1000000) % 100000) / 10000;
    d = (((M % 1000000) % 100000) % 10000) / 1000;
    e = ((((M % 1000000) % 100000) % 10000) % 1000) / 100;
    f = (((((M % 1000000) % 100000) % 10000) % 1000) % 100) / 10;
    g = (((((M % 1000000) % 100000) % 10000) % 1000) % 100) % 10;

    int h, i, j, k, l, o;
    h = (a * 10) + b;
    i = (b * 10) + c;
    j = (c * 10) + d;
    k = (d * 10) + e;
    l = (e * 10) + f;
    o = (f * 10) + g;

    if (N == h) {
        count += 1;
    } else {
        count += 0;
    }
    if (N == i) {
        count += 1;
    } else {
        count += 0;
    }
    if (N == j) {
        count += 1;
    } else {
        count += 0;
    }
    if (N == k) {
        count += 1;
    } else {
        count += 0;
    }
    if (N == l) {
        count += 1;
    } else {
        count += 0;
    }
    if (N == o) {
        count += 1;
    } else {
        count += 0;
    }
    printf("%d\n", count);
    return 0;
}

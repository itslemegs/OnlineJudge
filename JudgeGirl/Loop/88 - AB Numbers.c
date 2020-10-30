#include <stdio.h>

int main() {
    int x, y, n = 0, m = 0;
    scanf("%d%d", &x, &y);
    int k = x / 1000;
    int j = (x % 1000) / 100;
    int l = ((x % 1000) % 100) / 10;
    int o = ((x % 1000) % 100) % 10;

    int c = y / 1000;
    int d = (y % 1000) / 100;
    int e = ((y % 1000) % 100) / 10;
    int f = ((y % 1000) % 100) % 10;

    if (k == c) {
        n += 1;
    } else {
        n += 0;
    }

    if (j == d) {
        n += 1;
    } else {
        n += 0;
    }

    if (l == e) {
        n += 1;
    } else {
        n += 0;
    }

    if (o == f) {
        n += 1;
    } else {
        n += 0;
    }

    if (k == d) {
        m += 1;
    } else {
        m += 0;
    }

    if (k == e) {
        m += 1;
    } else {
        m += 0;
    }

    if (k == f) {
        m += 1;
    } else {
        m += 0;
    }

    if (j == c) {
        m += 1;
    } else {
        m += 0;
    }

    if (j == e) {
        m += 1;
    } else {
        m += 0;
    }

    if (j == f) {
        m += 1;
    } else {
        m += 0;
    }

    if (l == c) {
        m += 1;
    } else {
        m += 0;
    }

    if (l == d) {
        m += 1;
    } else {
        m += 0;
    }

    if (l == f) {
        m += 1;
    } else {
        m += 0;
    }

    if (o == c) {
        m += 1;
    } else {
        m += 0;
    }

    if (o == d) {
        m += 1;
    } else {
        m += 0;
    }

    if (o == e) {
        m += 1;
    } else {
        m += 0;
    }
    printf("%dA%dB", n, m);
    return 0;
}

#include <stdio.h>

int main () {
    int a, b;
    int h, water_after;
    int c, d;

    printf("");
    scanf("%d", &a);

    printf("");
    scanf("%d", &b);

    printf("");
    scanf("%d", &h);

    printf("");
    scanf("%d", &c);

    printf("");
    scanf("%d", &d);

    water_after = (a * b * h)/(a * b - c * d);

    printf("%d", water_after);

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    int perimeter, area;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &f);
    perimeter = (a + b + c + d + e + f) + (b + d + f) + (a + c + e);
    area = (a * (b + d + f) + c * (d + f) + e * f);
    printf("%d\n%d\n", perimeter, area);
    return 0;
}

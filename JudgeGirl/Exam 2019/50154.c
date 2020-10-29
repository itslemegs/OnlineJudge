#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g;
    int edges, paths;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &f, &g);
    edges = 1 * (a + b + c + d) + e * (a + b + c) + f * (c + d) + e * g + (f + g) * 1;
    paths = a * e * g + c * e * g + b * e * g + d * f + c * f;
    printf("%d\n%d", edges, paths);
    return 0;
}

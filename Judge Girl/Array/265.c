#include <stdio.h>
#define MIN(x,y) (x) < (y) ? (x) : (y)
#define MAX(x,y) (x) > (y) ? (x) : (y)
int main() {
    int x, y, rightx, righty, leftx, lefty;
    scanf("%d %d", &rightx, &righty);
    leftx = rightx;
    lefty = righty;
    while (scanf("%d %d", &x, &y) == 2) {
        rightx = MAX(rightx, x), leftx = MIN(leftx, x);
        righty = MAX(righty, y), lefty = MIN(lefty, y);
    }
    printf("%d\n", (rightx - leftx) * (righty - lefty));
    return 0;
}

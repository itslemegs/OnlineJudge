#include <stdio.h>

int main() {
    int digit;
    int count = 0, end, zero = 0, eleven, output, suma = 0, sumb = 0;

    while (scanf("%d", &digit) != EOF) {
        if (count % 2 == 0)
            suma += digit;
        else
            sumb += digit;

        if (digit == 0)
            zero++;

        count++;
    }
    if (digit % 2 == 0)
        end = 1;
    else
        end = 0;

    eleven = suma - sumb;

    if (eleven % 11 == 0)
        output = 1;
    else
        output = 0;

    printf("%d\n%d\n%d\n%d\n", count, end, zero, output);
    return 0;
}

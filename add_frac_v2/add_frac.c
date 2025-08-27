/* gets fraction from user and does some arthmetic. */

#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    char sign;
    printf("Enter two fractions separeted by an arthimetic sign: ");
    scanf("%d/%d%c%d/%d", &a, &b, &sign, &c, &d);

    if (sign == '+') {
        printf("%d/%d\n", ((b * d) / b * a) + ((b * d) / d * c), (b * d));
    } else if (sign == '-') {
        printf("%d/%d\n", ((b * d) / b * a) - ((b * d) / d * c), (b * d));
    } else if (sign == '*') {
        printf("%d/%d\n", (a * c), (b * d));
    } else if (sign == '/') {
        printf("%d/%d\n", (a * d), (b * c));
    }

    return 0;
}
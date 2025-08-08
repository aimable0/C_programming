#include <stdio.h>

int main(void)
{
    // gets fraction from user and displays the sum

    int a, b, c, d;

    printf("Enter two fractions separeted by a plus sign: ");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);

    // formular a/b + c/d
    int num, denom;
    num = ((b * d) / b * a) + ((b * d) / d * c);

    printf("%d/%d\n", num, (b * d));

    return 0;
}
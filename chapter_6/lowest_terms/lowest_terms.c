// Author: N Aimable.
// Purpose: a program that reduces the fraction to lowest terms.
// Date: 20 08 2025
#include <stdio.h>

int main(void)
{
    // Algorithm used,  Euclid's
    int m, n;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);
    int numerator = m;
    int denominator = n;


    int gcd;
    int remainder;
    while (1) {
        if (n == 0) {
            gcd = m;
            break;
        }

        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", (numerator / gcd), (denominator / gcd));
    return 0;
}
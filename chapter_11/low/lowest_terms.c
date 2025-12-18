// Author: N Aimable.
// Purpose: Reduces fraction to lowest terms using Euclid's Algorithm.
// Date: 20 08 2025
// Modified: to include functions (18 Dec, 2025)
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator;
    int reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int m = numerator, n = denominator, gcd, remainder;
    while (1) {
        if (n == 0) {
            gcd = m;
            break;
        }
        remainder = m % n;
        m = n;
        n = remainder;
    }
    *reduced_denominator = denominator / gcd;
    *reduced_numerator = numerator / gcd;
}

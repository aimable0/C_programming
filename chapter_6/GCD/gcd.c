// Author: N Aimable.
// Purpose: a program that asks the user to enter two integers, then calculates and displays their
            // greatest common divisor (GCD):
// Date: 20 08 2025
#include <stdio.h>

int main(void)
{
    // Algorithm used,  Euclid's
    int m, n = 1;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    int gcd;
    int remainder;

    while (1) {
        if (n == 0) {
            gcd = m;
            break;
            // Reminder:
            // I just mistakenly wrote an if without braces
            // and I ended up making the program run 'break;' as independed statement with in while; regardless of whether if checks true.
            // I will always put braces on if statements even when it's just one statement.
            // for safety.. :) atleast for now hhhh
        }

        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", gcd);
    return 0;
}
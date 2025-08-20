/* Write a program that approximates e by computing the value of */

#include <stdio.h>

int main(void)
{
    // formular: e = 1 + 1/1! + 1/2! + 1/3!
    // n! (n factorial) = n \times (n-1) x (n-2) x ... x 1

    double factorial = 1.0f;
    double e = 1.0f;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += (1.0 / factorial);
        //!\doing something like (1 / factorial) above
        //!\ would result into unwanted behaviour; ex 1/2 = 0 instead of 0.5.
    }
    printf("for n equal to: %d, e is approximately: %f\n", n, e);
    return 0;
}
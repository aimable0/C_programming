// Author: N Aimable
// purpose: calculates gcd()

#include <stdio.h>


int gcd(int, int);

int main(void)
{
    // test our gcd
    int a, b;
    a = 12;
    b = 28;
    printf("greatest common divisor: %d\n", gcd(a, b));
}

int gcd(int m, int n)
{
    int remainder = 0;
    if (n == 0) {
        return m;
    }
    else {
        // this is what we are doing
        // remainder = m % n;
        // m = n;
        // n = remainder;
        // return gcd(n, m % n);
        return gcd(n, m % n);
    }
}

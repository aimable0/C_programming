// Author: N Aimable
// purpose: returns number of digits in an int

#include <stdio.h>

int num_digits(int);

int main(void)
{
    int x = 1230;
    printf("The num %d has %d\n", x, num_digits(x));
}

int num_digits(int n)
{
    int digits = 0;

    // handle n = 0
    if (n == 0)
        return 1;

    while (n != 0){
        n /= 10;
        digits++;
    }

    return digits;
}
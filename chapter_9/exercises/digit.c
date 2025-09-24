#include <stdio.h>

int digit(int, int);
int num_digits(int n);

int main(void)
{
    // test
    int number = digit(82391, 6);
    printf("num: %d\n", number);

    return 0;
}

int digit(int n, int k)
{
    int i = 1;
    int remainder = 0;

    if (num_digits(n) < k)
        return 0;

    while(n != 0) {
        remainder = n % 10;
        n /= 10;
        if (i == k)
            break;
        i++;
    }

    return remainder;
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
#include <stdio.h>

void pb(int n);

int main(void)
{
    pb(8);
}

void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
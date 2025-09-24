#include <stdio.h>

int fact(int);

int main(void)
{
    int n = 4;
    printf("num: %d\n", fact(5));

    return 0;
}

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
}
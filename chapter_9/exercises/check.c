#include <stdio.h>

int check(int, int, int);

int main(void)
{
    int a, b, n;
    n = 10;
    a = 4;
    b = 10;
    printf("returned: %d\n", check(a, b, 10));

    return 0;
}

int check(int x, int y, int n)
{
    return ((x >= 0 && x <= (n - 1)) && (y >= 0 && y <= (n - 1))) ? 1 : 0;
}

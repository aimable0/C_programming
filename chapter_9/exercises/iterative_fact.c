#include <stdio.h>

int fact(int);

int main(void)
{
    int n = 4;
    printf("num: %d\n", fact(5));
    return 0;
}

int fact(int n)
{
    int result = 1;
    while (n != 0)
    {
        result *= n;
        n--;
    }
    return result;
}

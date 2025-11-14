/* A function is recursive if it calls itself. */
#include <stdio.h>

int power(int x, int n);

int main(void)
{
    // check...
    int x = 5;
    int n = 4;
    int xpn = power(x, n);
    printf("%d\n", xpn);
}

// how can we calculate the power if n is even..
int power(int x, int n)
{
    if (n == 0)
        return 1;
        
    if (n % 2 == 0)
    {
        int half = power(x, n / 2);
        return half * half;
    }

    return x * power(x, --n);
}

// {
//     if (n == 0)
//         return 1;
//     return x * power(x, --n);
// }
#include <stdio.h>

#define N 5
int main(void)
{

    int a[N] = {1, 2, 3, 4, 5};
    // use a for loop and pointers and pointer arithmetice to calculate the sum
    int sum = 0;
    for (int *p = &a[0]; p <= &a[N - 1]; p += 1)
    {
        sum += *p;
    }
    printf("sum: %d\n", sum);

    return 0;
}
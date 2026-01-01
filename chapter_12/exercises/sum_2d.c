#include <stdio.h>
#define LEN 3


int sum_two_dimensional_array(const int a[][LEN], int n);
int sum_two_dimensional_array_v2(const int (*a)[LEN], int n);

int main(void)
{
    int a[2][LEN] = {{1, 2, 3,}, {4, 5, 6}};
    int sum = sum_two_dimensional_array_v2(a, 2);
    printf("sum: %d\n", sum);

    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];
    return sum;
}

// using pointers
int sum_two_dimensional_array_v2(const int (*a)[LEN], int n)
{
    int *p = a[0], *end = a[n], sum = 0;

    while(p < end)
        sum += *p++;

    return sum;
}

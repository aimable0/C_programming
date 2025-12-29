#include <stdio.h>

#define SIZE 5

// const indicates that a should not be modified.
int sum_array(const int a[], int n) {

    int sum = 0;

    // version 1.
    // for (int i = 0; i < n; i++)
    //     sum += a[i];

    // version 2.
    int *p = a;
    while(p < &a[n])
        sum += *p++;

    return sum;
}

int main()
{
    int a[SIZE] = {1, 2, 3, 4, 5};
    int sum = sum_array(a, SIZE);
    printf("sum: %d\n", sum);
}

// exercise
// Rewrite the following function to use pointer arithmetic instead of array subscripting. (In
// other words, eliminate the variable i and all uses of the [] operator.) Make as few changes
// as possible.
// void store_zeros(int a[], int n)
// {
// int i;
// for (i = 0; i < n; i++)
// a[i] = 0;
// Section 12.4 W
// }

// Solution:
#include <stdio.h>

#define LEN 5
void store_zeros(int a[], int n)
{
    int *p = a;
    while(p < &a[n]) {
        *p++ = 0;
    }
}

int main(void) {
    int a[LEN] = {1, 2, 3, 4, 5};
    
    store_zeros(a, LEN);
    for (int i = 0; i < LEN; i++)
        printf("%d\n", a[i]);

    printf("\n");
    return 0;
}
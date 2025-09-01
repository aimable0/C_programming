/* reversing a series of numbers */
#define SIZE 10

#include <stdio.h>
int main(void)
{
    int a[SIZE] = {0}; // initializing all element to zero.

    printf("Enter 10 numbers: ");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = N - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
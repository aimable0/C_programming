/* Recieves a series of number from a user and reverses them */
#include <stdio.h>

#define LENGTH (int) ( sizeof(a) / sizeof(a[0]))
int main(void)
{
    int a[10], *p;

    printf("Enter %d numbers: ", LENGTH);
    for (p = a; p < a + LENGTH; p++) {
        scanf("%d", p);
    }
    p--; // to revert to last valid memory

    printf("In reverse order:");
    for (; p >= a; p--) {
        printf(" %d", *p);
    }

    printf("\n");
    return 0;
}
/* Recieves a series of number from a user and reverses them */
#include <stdio.h>

#define LENGTH (int) ( sizeof(a) / sizeof(a[0]))
int main(void)
{
    int a[10], i;

    printf("Enter %d numbers: ", LENGTH);

    for (i = 0; i < LENGTH; i++)
        scanf("%d", &a[i]);

    printf("In reverse order:");
    for (i = LENGTH - 1; i >= 0; i--)
        printf(" %d", a[i]);

    printf("\n");
    return 0;
}
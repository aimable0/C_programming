#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i< 5; i++)
    {
        // multiply each element by 2
        *(ptr + i) = *(ptr + i) * 2;
        *(ptr + i) = *(ptr + i) + 1;
    }

    printf("output 1: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i< 5; i++)
    {
        // set all elements to zero if even
        if (*(ptr + i) % 2 == 0) {
            *(ptr + i) = 0;
        if (*(ptr + i) > 9){ // add 5 to elements greater thatn 9
            *(ptr + i) = *(ptr + i) + 5;
        }
    }

    printf("output 2: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
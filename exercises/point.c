#include <stdio.h>


int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;


    for (int i = 0; i < 5; i++)
    {
        printf("Adress using ptr + %d: %p\n", i, ptr + i);
    }

    return 0;
}
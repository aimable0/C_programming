#include <stdio.h>

int main(void)
{
    int arr[] = {3, 6, 9};
    printf("%d\n", arr[1]); // output: 6
    printf("%d\n", *(arr + 1)); // ouput: 6
    printf("new: %d\n", *arr);
    // printf("new: %d\n", &arr[0]);

    int arr1[]= {2, 4, 6, 8};
    int *ptr = arr1;
    printf("%d\n", *(ptr + 2)); // output: 6
    printf("%d\n", ptr[2]); // output: 6

}
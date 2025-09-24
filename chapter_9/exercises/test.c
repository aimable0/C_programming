#include <stdio.h>

void print_array(int[]);

int main(void)
{
    int arr[10] = {0};
    print_array(arr);

}

void print_array(int arr[])
{
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
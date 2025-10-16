#include <stdio.h>
#include <stdlib.h>

int *get_elements(int n, int *arr);
void print_elements(int n, int *arr);

int main(void)
{
    int n, *arr;

    printf("Enter a number of elements: ");
    scanf("%d", &n);

    // check
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements: \n");
    arr = get_elements(n, &arr);

    printf("You entered: \n");
    print_elements(n, &arr);

    free(arr);
}


int *get_elements(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return arr;
}

void print_elements(int n, int *arr)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
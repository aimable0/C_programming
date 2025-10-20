#include <stdio.h>
#define TOT_INTS 10

// function prototypes
void selection_sort(int *, int, int);
void print_array(int *);

int main(void)
{
    int arr[] = {1, 4, 7, 9, 0, 3, 2, 6, 5, 8};
    printf("Un-sorted values: ");
    print_array(arr);

    selection_sort(arr, 9, 1);
    printf("   Sorted values: ");
    print_array(arr);
    return 0;
}

void print_array(int *arr)
{
    for (int i = 0; i < TOT_INTS; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selection_sort(int *arr, int last_index, int limit_size)
{
    int current_largest = arr[0];
    int temp;
    int moved_index;

    if (last_index == 0)
    {
        

        return;
    }

    printf("<TOT_INTS - limit_size>: %d\n", TOT_INTS - limit_size);
    for (int i = 0; i < (TOT_INTS - limit_size); i++)
    {
        printf("Comparing: current_largest: %d - arr[i + 1]: %d\n", i, i + 1);
        if (current_largest < arr[i + 1])
        {
            current_largest = arr[i + 1];
            printf("overall largest: %d\n\n", current_largest);
            moved_index = i + 1;
        }
    }



    temp = arr[last_index];
    arr[last_index] = current_largest;
    arr[moved_index] = temp;

    return selection_sort(arr, --last_index, ++limit_size);
}

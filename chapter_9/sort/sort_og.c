#include <stdio.h>
#define TOT_INTS 10

// function prototypes
void selection_sort(int *, int);
void print_array(int *);

int main(void)
{
    // get series of integers.

    // for the sake of test --
    int arr[] = {1, 4, 7, 9, 0, 3, 2, 6, 5, 8};

    printf("Un-sorted values: ");
    print_array(arr);

    /// trial
    int current_largest = 0;
    int temp;
    int moved_index;
    int last_index = 9;
    for (int i = 0; i < TOT_INTS - 1; i++)
    {
        if (current_largest < arr[i + 1])
        {
            current_largest = arr[i + 1];
            printf("Find our next big: %d\n", current_largest);
            moved_index = i + 1;
        }
    }

    // we need to keep track of the current last_index.
    temp = arr[last_index];
    arr[last_index] = current_largest;
    arr[moved_index] = temp;
    /// end trial

    /// trial 2
    last_index = 8;
    current_largest = 0;
    for (int i = 0; i < TOT_INTS - 2; i++)
    {
        if (current_largest < arr[i + 1])
        {
            current_largest = arr[i + 1];
            printf("Find our next big: %d\n", current_largest);
            moved_index = i + 1;
        }
    }

    // we need to keep track of the current last_index.
    temp = arr[last_index];
    arr[last_index] = current_largest;
    arr[moved_index] = temp;
    /// end trial 2

    // selection_sort(arr); // sort
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

// void selection_sort(int *arr, int last_index)
// {
//     int current_largest;
//     int temp;
//     int moved_index;
//     last_index = 9;

//     for (int i = 0; i < TOT_INTS ; i++)
//     {
//         current_largest = arr[i];
//         if (current_largest < arr[i + 1])
//         {
//             current_largest = arr[i + 1];
//             moved_index = i;
//         }
//     }

//     // we need to keep track of the current last_index.
//     temp = arr[last_index];
//     arr[last_index] = current_largest;
//     arr[moved_index] = temp;

//     return selection_sort(arr, --last_index);
// }

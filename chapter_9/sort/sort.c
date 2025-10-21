/* implementing a selection sort */
#include <stdio.h>

// prototypes
void print_array(int size, int arr[size]);
void sort(int size, int arr[size]);

int main(void)
{
    // program asks users for a series of integers
    int numbers[10] = {1, 9, 3, 8, 6, 2, 0, 4, 7, 5};

    print_array(10, numbers);
    sort(10, numbers);
    print_array(10, numbers);
}

/**
 * print_array - Prints an array of integers to stdout.
 * @arr: The integer array.
 * @size: The number of elements in the array.
 *
 * Return: Nothing.
 */

void print_array(int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int size, int arr[size])
{
    if (size == 1)
        return;

    int largest = arr[size - 1];
    int largest_prev_position = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_prev_position = i;
        }
    }

    // check if largest was actually changed
    if (largest == arr[size - 1])
    {
        return sort(--size, arr);
    }
    else
    {
        // place largest at the end
        int temp = arr[size - 1];
        arr[size - 1] = largest;
        arr[largest_prev_position] = temp;
        return sort(--size, arr);
    }
}

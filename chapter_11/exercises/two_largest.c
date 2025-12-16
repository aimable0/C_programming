#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);
int main(void)
{
    int a[] = {-1};
    int largest;
    int second_largest;
    find_two_largest(a, 1, &largest, &second_largest);
    printf("Largest: %d and second largest: %d\n", largest, second_largest);
    printf("a[1]: %d when a is has just one element\n", a[1]); // undefined behaviour
    return 0;
}

// this program assumes
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = a[0];
    if (n > 1) *second_largest = a[1]; // prevents array index past the end of the array.
    else *second_largest = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > *largest)
        {
            int temp = *largest;
            *largest = a[i];
            *second_largest = temp;
        }
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}

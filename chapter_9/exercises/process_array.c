#include <stdio.h>

int largest_from_array(int length, int[length]);
double array_average(int length, int n[length]);
int positive_elements(int length, int n[length]);

int main(void)
{
    int n[10] = {1, 2, 3, -4, 5, 7, -8, -9, -10};
    int arr[10] = {1, 2, 3, 4, 5, 7, 10, 9, 8, 6};
    int length = 10;

    int largest = largest_from_array(length, arr);
    double average = array_average(length, arr);
    int posElements = positive_elements(length, n);
    printf("largest: %d\n", largest);
    printf("largest: %.2f\n", average);
    printf("largest: %d\n", posElements);

}

int largest_from_array(int length, int n[length])
{
    int largest = 0;
    for (int i = 0; i < length; i++) {
        if (largest < n[i])
            largest = n[i];
    }

    return largest;
}

double array_average(int length, int n[length])
{
    double sum = 0;
    for (int i = 0; i < length; i++)
        sum += n[i];

    return sum / length;
}

int positive_elements(int length, int n[length])
{
    int count = 0;
    for (int i = 0; i < length; i++)
        if (n[i] > 0) count++;

    return count;
}

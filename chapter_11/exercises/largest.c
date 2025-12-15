#include <stdio.h>

void *find_largest(int a[], int n) {

    int largest = a[0];
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (largest < a[i]) {
            largest = a[i];
            index = i;
        }
    }

    return &a[index];
}

int main(void) {
    int array[] = {1, 2, 3, 10, 5, 4};

    int *largest = find_largest(array, 6);
    printf("largest: %d\n", *largest);
    return 0;
}
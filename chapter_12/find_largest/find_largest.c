// A program that Finds the Largest element in the array
#include <stdio.h>

int find_largest(int *a, int n) {
    int largest = a[0];
    int *ptr_a = a + 1;
    int *end = a + n;
    
    while(ptr_a < end) {
        if (largest < *ptr_a) {
            largest = *ptr_a;
        }
        ptr_a++;
    }
    return largest;
}

int main(void) {
    int a[] = {1, 5, 11, 4, 0, -1, 10};
    printf("Largest: %d\n", find_largest(a, 7));
    return 0;
}

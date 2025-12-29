#include <stdio.h>
#include <stdlib.h>

// Prototype.
void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) {
    int a[] = {0, 0};
    int largest, second_largest;
    find_two_largest(a, 2, &largest, &second_largest);
    printf("Largest: %d - Second Largest: %d\n", largest, second_largest);
    return 0;
}


//a points to an array of length n. The function searches the array for its largest and second-
// largest elements, storing them in the variables pointed to by largest and
// second_largest, respectively. Use pointer arithmetic—not subscripting—to visit array elements.
void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
    if (n < 2)
        exit(1);

    // random initialization.
    *largest = *a;
    *second_largest = *(a + 1);

    int *p = a;
    while(p < a + n - 1) {
        if (*largest < *(++p)) {
            *second_largest = *largest;
            *largest = *p;
        }
    }
}

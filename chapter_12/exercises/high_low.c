#include <stdio.h>

int main(void) {
    int *high, *low, *middle;

    int a[5] = {1, 2, 3, 4, 5};
    int *one = a;
    int *two = a;
    int *next = two - one; // What would this result into
    // printf("%d\n", *(two - one)); // how far apart are these pointers (measure in array elements);

    // middle = (low + high) / 2; // this is illegal. Why?
    // The reason is that pointer arithmetic only supports pointers substiution and incrementing and decrenting them only
}
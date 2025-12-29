#include <stdio.h>

int main(void) {
    int *high, *low, *middle;

    int a[5] = {1, 2, 3, 4, 5};
    int *one = a;
    int *two = a;
    int *next = two - one; // or ...
    // printf("%d\n", *(two - one)); // --> how far apart are these pointers (measure in array elements);

    // middle = (low + high) / 2; // this is illegal.
    // The reason being that pointer arithmetic only supports incrementing and decrenting
    // and substituting one pointer from the other them only (example above)..
}

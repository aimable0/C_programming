#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p, *q, i;
    p = &a[2];
    printf("%d\n", *p); // -> 3

    // pointer arthimetic
    q = p + 1; // index 3 (sice p has index 2)
    printf("%d\n", *q); // -> 4
    p += 2; // this give p access to a[2 (which p was formely pointing to ) + 2];
    printf("%d\n", *p); // -> a[4]

    p -= 4; // p pointing at a[0];
    printf("%d\n", *p); // -> 1.

    p += 1; // a[1].
    q = p + 2; // a[1 + 2] .. a[3]
    i = q - p; // this pointer arthimetic returns an actual number .. i = 2 (3 of q - 2 of p) ..
    printf("%d\n", a[i]); // a[2]
    printf("%d\n", i);
    printf("\n");

    // comparing pointers.
    // this is meaningful when both pointers point to the same array.

    // pointer to compound literal
    int *k = (int[]) {1, 2, 3, 4, 5};
    printf("%d\n", *k); // this should give you the first element.
    printf("%d\n", *(k + 1)); // this should give you the second element.


    return 0;
}

#include <stdio.h>

int main(void) {
    // we can use array name as pointers.
    int a[5] = {1, 2, 3, 4, 5};


    printf("num: %d\n", *(a + 0));
    printf("num: %d\n", *(a + 1));
    printf("num: %d\n", *(a + 2));

    // getting adress
    printf("address: %p\n", a);
    printf("address: %p\n", a + 1);

    // but we can't use array names to assign new values (ex by incrementing)
    // *(a + 1)++; // error: expression is not assignable

    // also attempting to make it point elsewhere
    // a++;  // error: cannot increment value of type 'int[array_length]'

    // but we can modify values as follows:
    *(a + 1) = 0;
    printf("num: %d\n", *(a + 1));

    // we know we can increment normal pointers as follows
    int *p = a;
    while(p < a + 5) {
        printf("%d ", *p);
        p++; // each iteration points to a different address.
    }
    printf("\n");

    return 0;

}

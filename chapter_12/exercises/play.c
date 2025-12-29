#include <stdio.h>

#define LEN 5
// create a simple functoin that process and prints array element
// concept: declaraing paramater as *a and a[] all indicate the same thing that's its a pointer.
// in function params, array decay to pointers.
void f(int a[], int n);

int main(void) {
    int array[LEN] = {1, 2, 3, 4, 5};
    f(array, LEN);

    // printf("%d\n", *array++); // this would give you trouble (unlike in params.)
    return 0;
}

void f(int *a, int n) {
    int *p = a;

    printf("num: ");

    for (; a < p + n;) {
        printf("%d ", *a++); // this works even when a was declared as an array i.e a[].
    }

    // while(a < p + n) {
    //     printf("%d ", *a++); // this works even when a was declared as an array i.e a[].
    // }
    printf("\n");
}

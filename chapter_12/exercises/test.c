#include <stdio.h>

#define SIZE 5
int main(void) {
    int a[SIZE] = {1, 2, 3, 4, 5};
    int *p = a;

    //  p == a[0] // a[0] => *(a + 0) -> int vs int *
    // p == &a[0]; // legal address comparison
    // *p == a[0]; // legal value comparison
    if (p[0] == a[0]) printf("true\n"); // legal value comparison
}

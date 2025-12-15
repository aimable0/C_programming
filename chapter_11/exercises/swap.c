#include <stdio.h>

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}
int main(void) {
    int i = 10;
    int j = 20;

    printf("before swap - i: %d and j: %d\n", i, j);
    swap(&i, &j);
    printf("after swap - i: %d and j: %d\n", i, j);

    return 0;
}
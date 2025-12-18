#include <stdio.h>

int main(void) {

    int i = 0;
    int *p = &i;
    (*p)++;
    printf("Value incremented: %d\n", *p);
    printf("Value incremented: %d\n", i);
}
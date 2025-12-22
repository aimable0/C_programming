#include <stdio.h>

int main(void) {

    int i[3] = {1, 12, 3};
    int *p = &i[0];
    *p++ = 10;
    printf("Value incremented: %d\n", *(p));
    printf("Value incremented: %d\n", i[0]);
}

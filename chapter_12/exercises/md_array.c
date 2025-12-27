#include <stdio.h>

#define ROW 3
#define COL 2

int main(void) {
    int a[ROW][COL] = {{1, 2}, {3, 4}, {5, 6}};
    int *p = &a[0][0];
    int sa[2] = {1, 2};

    // Tests.
    printf("\n-- Two dimensional array ---\n");
    printf("      &a: %p\n", &a); // Same address as &a[0][0]..
    printf("&a[0][0]: %p\n", &a[0][0]);
    printf(".   a[0]: %p\n", a[0]); // this refers to a valid address first address of the block.
    // printf(" a[0][0]: %p\n", a[0][0]); // This doesn't refer to any valid address 0x1.

    int (*ptr)[COL] = a; // a ptr to whole array of COL elements.
    printf("num: %d\n", (*ptr)[0]);
    printf("num: %d\n", (*ptr)[1]);

    // how would you print all the elements of the md array
    // suggestion: have a int * pointing to the first element,
    // increment it and keep track when it reaches the last element.
    int *ptr1;
    printf(" ----- -------\n");
    for (ptr1 = a[0]; ptr1 <= &a[ROW - 1][COL - 1]; ptr1++) {
        printf("%d\n", *ptr1);
    }

}
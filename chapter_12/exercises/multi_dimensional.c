#include <stdio.h>

#define ROW 2
#define COL 2

int main(void)
{
    int a[ROW][COL] = {{1, 2}, {3, 4}};
    int *p = &a[0][0];
    int sa[2] = {1, 2};

    // Tests.
    printf("\n -- Two dimensional array ---\n");
    printf("      &a: %p\n", &a); // Same address as &a[0][0]..
    printf("&a[0][0]: %p\n", &a[0][0]);
    // printf(" a[0][0]: %p\n", a[0][0]); // This doesn't refer to any valid address 0x1.
    printf(".   a[0]: %p]\n", a[0]); // But this refers to a valid address first address of the block.

    printf("\n -- One dimensional array ---\n");
    // All three should print same address.
    printf("      sa: %p\n", sa); // Same address as &sa.
    printf("     &sa: %p\n", &sa);
    // printf("     sa[0]: %p\n", sa[0]); // This shows address 0x1 which is invalid memory address like 0x0 (NULL)
    //! note: lowest memory address are often reserved and trying to access them cause crash and segmentation fault.
    printf("   &sa[0]: %p\n", &sa[0]);

    // How would we loop throught this using pointer p.
    // p is pointing to the first element a[0][0]..
    // we should also have in mind that a multi dimensional aray is still stored in rows of consecutive chunks of memory

    // for (; p <= &a[ROW - 1][COL -1]; p++)
    // {
    //     printf("num: %d\n", *p);
    // }


    // How would process rows of multidimensional array.
    // How would we process just one row.
    // int i = 1; // row one.
    // int *r = a[i];
    // printf("row content\n");
    // for (; r <= &a[i][COL -1]; r++) {
    //     printf("%d\n", *r);
    // }

    // How would we process columns? in this multi dimensional array.
    int md_array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int (*ptr)[3] = &md_array[0];
    // printf("num: %d\n", *&md_array[0][0]);
    // printf("%d\n", (*ptr)[0]); // -> 1
    // printf("%d\n", (*ptr)[1]); // -> 2
    // printf("%d\n", (*ptr)[2]); // -> 3

    // trial .. increment ptr
    // printf("\n---------- \n");
    // printf("%d\n", (*ptr++)[0]); // -> 1
    // printf("%d\n", (*ptr++)[0]); // -> 4
    // printf("%d\n", (*ptr)[0]);   // -> 7

    // clear array.
    // printf("\nClearing array: \n");
    // for (; ptr < &md_array[3]; ptr++) {
    //     (*ptr)[0] = 0;
    // }

    printf(" test ... \n");
    printf("1. last address: %p\n", &md_array[0]);
    printf("2. last address: %p\n", ptr);

    printf("%d\n", md_array[0][0]); // -> 0
    printf("%d\n", md_array[1][0]); // -> 0
    printf("%d\n", md_array[2][0]); // -> 0

    return 0;
}

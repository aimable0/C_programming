#include <stdio.h>
#define N 10

double ident[N][N] = {0};
int row, col;

void print_matrix(double ident[N][N]);

int main(void) {

    // Version 1.
    // for (row = 0; row < N; row++) {
    //     for (col = 0; col < N; col++)
    //         if (row == col)
    //             ident[row][col] = 1.0;
    //         else
    //             ident[row][col] = 0.0;
    // }

    // some tests.
    // double (*ptr)[N] = &ident[0];
    // *(*ptr) = 5; // this works same as (*ptr)[0]

    // approach:
    // 1. point to the first element
    // 2. set it to 1 and skip N elements add set that to 1 continue as long as you don't get  past the last row.

    double *p = &ident[0][0];
    printf("Sample: %d\n", (int)*p);

    // Version 2.
    for (; p < &ident[N][N]; p += 11) {
        *p = 1;
    }

    print_matrix(ident);
}


// Section 8.2 had a program fragment in which two nested for loops initialized the array
// ident for use as an identity matrix.
// Rewrite this code, using a single pointer to step through the array one element at a time.
void print_matrix(double ident[N][N]) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            printf("%d ", (int)ident[row][col]);
        }
        printf("\n");
    }
}

/* a program that reads a 5 × 5 array of integers and then prints the row sums and the column sums */

#include <stdio.h>
#define N 5

int main(void)
{
    int five_x_five[N][N] = {0};    // array to store integers in 5 x 5 array
    int row_sum = 0;
    int col_sum = 0;
    int num = 0;    // to hold current digit.

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int m = 0; m < N; m++) {
            scanf("%d", &num);
            five_x_five[i][m] = num;
        }
        printf("\n");
    }

    // row totals
    printf("Row totals: ");
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            row_sum += five_x_five[i][m];
        }
        printf("%d ", row_sum);
        row_sum = 0; // reset row_sum
    }
    printf("\n");

    // Column totals.
    printf("Column totals: ");
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            col_sum += five_x_five[m][i];
        }
        printf("%d ", col_sum);
        col_sum = 0; // reset.
    }
    printf("\n");

    return 0;
}
/* a program that reads a 5 × 5 array of integers and then prints the row sums and the column sums */

#include <stdio.h>
#define N 5

int main(void)
{
    int five_x_five[N][N] = {0};    // array to store integers in 5 x 5 array
    int row_sum = 0;
    int col_sum = 0;
    int num = 0;    // to hold current digit.

    // array to store col and row totals
    int row_tot_array[N] = {0};
    int col_tot_array[N] = {0};

    for (int i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (int m = 0; m < N; m++) {
            scanf("%d", &num);
            five_x_five[i][m] = num;
        }
        printf("\n");
    }

    // store row and col totals
    for (int i = 0; i < N; i++) {

        for (int m = 0; m < N; m++) {
            row_sum += five_x_five[i][m];
            col_sum += five_x_five[m][i];
        }

        row_tot_array[i] = row_sum;
        col_tot_array[i] = col_sum;

        row_sum = 0; // reset row_sum
        col_sum = 0; // reset
    }

    // Now we can use the array of total to print row and col sums


    return 0;
}
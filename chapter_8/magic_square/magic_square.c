// Author: N Aimable
// Purpose: A program that prints as n x n magic square
// Date: 20-Oct-2025
#include <stdio.h>
#include <stdbool.h>

void print_array(int size, int arr[size][size]);
bool is_magic_sqaure(int size, int arr[size][size]);

int main(void)
{
    int row = 0;
    int col = 0;
    int temp_row = 0;
    int temp_col = 0;
    int n = 0; // size

    // Intro to display
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic sqaure: ");
    scanf("%d", &n);

    int array[n][n];
    int occupied[n][n];

    // initialize array 'occupied' to keep track of already used cells.
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            occupied[i][j] = false;

    // Placing first element (in middle of first row).
    col = n / 2;
    array[row][col] = 1;
    occupied[row][col] = true;

    for (int number = 2; number <= n * n; number++)
    {
        // step 1 - draft cell
        row = row - 1;
        temp_row = row;
        col = col + 1;
        temp_col = col;

        // step 2 - check cell bounds
        if (row > (n - 1) || row < 0)
            row = n - 1;

        if (col > (n - 1) || col < 0)
            col = 0;

        // step 3 - check cell availability
        if (occupied[row][col] == false)
        {
            array[row][col] = number;
            occupied[row][col] = true;
        }
        else
        {
            row = temp_row + 2;
            col = temp_col - 1;
            array[row][col] = number;
            occupied[row][col] = true;
        }
    }

    // check if valid magic square..
    bool is_magic = is_magic_sqaure(n, array);
    if (is_magic)
    {
        print_array(n, array);
    }
    else
    {
        printf("Oops! not a magic square!\n");
    }

    return 0;
}

/**
 * print_array - prints the magic square array
 * @size: size of row and cols
 * @arr: multidimensional array of magic sqaure
 *
 * Returns: Void always
 */
void print_array(int size, int arr[size][size])
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%6d", arr[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

/**
 * is_magic_sqaure - checks if the magic square stored in array is valid
 * @size: size of row and cols
 * @arr: multidimensional array of magic sqaure
 *
 * Returns: true if magic sqaure is valid and false otherwise.
 */
bool is_magic_sqaure(int size, int arr[static size][size])
{
    int diagonal = 0;
    int row_sum = 0;
    int col_sum = 0;
    int sample_sum = 0;

    // calculate rows and cols, and diagonals sums
    for (int i = 0, k = (size - 1); i < size; i++, k--)
    {
        diagonal += arr[i][i];

        for (int j = 0; j < size; j++)
        {
            row_sum += arr[i][j];
            col_sum += arr[j][i];
        }

        if (row_sum != col_sum)
            return false;

        sample_sum = row_sum;
        row_sum = 0;
        col_sum = 0;
    }

    if (diagonal != sample_sum)
        return false;

    return true;
}
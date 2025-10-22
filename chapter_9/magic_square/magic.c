// Author: N Aimable
// Purpose: A program that prints as n x n magic square
// Date: 20-Oct-2025
// Modified: 22-Oct-202 - to break logic into functions

#include <stdio.h>
#include <stdbool.h>

void create_magic_square(int size, char magic_square[size][size]);
void print_magic_square(int size, char magic_square[size][size]);
bool is_magic_square(int size, char magic_square[static size][size]);

int main(void)
{
    int n = 0; // size

    // Intro to display
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic sqaure: ");
    scanf("%d", &n);

    char magic_square[n][n];

    // create magic square
    create_magic_square(n, magic_square);

    // check if valid magic square..
    bool is_magic = is_magic_square(n, magic_square);
    if (is_magic)
        print_magic_square(n, magic_square);
    else
        printf("Oops! not a magic square!\n");

    return 0;
}

/**
 * create_magic_square - creates magic square (10 * 10 array with numbers 1 - n * n)
 * @size: magic square number (odd number 1 - 99);
 * @magic_square: magic square array
 *
 * Return: Nothing
 */
void create_magic_square(int size, char magic_square[size][size])
{
    int row = 0;
    int col = 0;
    int temp_row = 0;
    int temp_col = 0;

    int occupied[size][size];

    // initialize array 'occupied' to keep track of already used cells.
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            occupied[i][j] = false;

    // Placing first element (in middle of first row).
    col = size / 2;
    magic_square[row][col] = 1;
    occupied[row][col] = true;

    for (int number = 2; number <= size * size; number++)
    {
        // step 1 - draft cell
        row = row - 1;
        temp_row = row;
        col = col + 1;
        temp_col = col;

        // step 2 - check cell bounds
        if (row > (size - 1) || row < 0)
            row = size - 1;

        if (col > (size - 1) || col < 0)
            col = 0;

        // step 3 - check cell availability
        if (occupied[row][col])
        {
            row = temp_row + 2;
            col = temp_col - 1;
        }

        magic_square[row][col] = number;
        occupied[row][col] = true;
    }
}

/**
 * print_magic_square - prints the magic square 2d-array
 * @size: size of row and cols
 * @magic_square: multidimensional array of magic sqaure
 *
 * Returns: Void always
 */
void print_magic_square(int size, char magic_square[size][size])
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%6d", magic_square[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}

/**
 * is_magic_square - checks if the magic square stored in array is valid
 * @size: size of row and cols
 * @magic_square: multidimensional array of magic sqaure
 *
 * Returns: true if magic sqaure is valid and false otherwise.
 */
bool is_magic_square(int size, char magic_square[static size][size])
{
    int diagonal = 0;
    int row_sum = 0;
    int col_sum = 0;
    int sample_sum = 0;

    // calculate rows and cols, and diagonals sums
    for (int i = 0, k = (size - 1); i < size; i++, k--)
    {
        diagonal += magic_square[i][i];

        for (int j = 0; j < size; j++)
        {
            row_sum += magic_square[i][j];
            col_sum += magic_square[j][i];
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
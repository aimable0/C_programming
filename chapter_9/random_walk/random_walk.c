/* Write a program that generates a “random walk” across a 10 × 10 array. */
// draft 2:
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

#define N 10

// prototypes
void generate_random_walk(char[10][10]);
void print_array(char[10][10]);

/**
 * main - program entry point
 *
 * Return: 0 on success and 1 on fail
 */
int main(void)
{
    char random_walk[N][N];

    // generate walk
    generate_random_walk(random_walk);

    // print walk
    print_array(random_walk);

    return 0;
}

/**
 * generate_random_walk - generates a random walk
 * @walk: an array that contains the random walk
 *
 * Return: nothing
 */
void generate_random_walk(char random_walk[10][10])
{
    char ch = 'A';
    int row = 0;
    int col = 0;

    // initializer the grid.
    for (int i = 0; i < N; i++)
    {
        for (int m = 0; m < N; m++)
        {
            random_walk[i][m] = '.';
        }
    }

    // sedd random generator once.
    srand((unsigned)time(NULL));

    // place first letter
    random_walk[row][col] = ch++;

    while (ch <= 'Z')
    {
        int directions[4][2] = {
            {-1, 0}, // up -- i.e to move up we need to remove 1 from current row
            {0, 1},  // right -- i.e to move right we add zero to the current row and add 1 to current col
            {1, 0},  // down -- i.e or simply to move down we add 1 to current row
            {0, -1}  // left -- to move left we (like back) we remove 1 from current col and row remains the same.
        };

        bool moved = false; // to keep track of a movement

        for (int tries = 0; tries < 4; tries++)
        {
            int d = rand() % 4; // to get a direction between 0 - 3

            // EXPLANATIONS (for me).
            // lets assume I am getting 0 and I need to go up
            // where should we place the letter.
            // d = 0;
            // row = row - 1 and col = col (remain as it is )
            // so I need to add -1 to row
            // what would help me get a -1 to add it to current row to create a new row
            // something like this. new_row = row + directions[0][0]
            // directions[0][0] = -1
            //
            // assume i needed to go down, d = 2
            // I will need to add 1 to the current row
            // what could help me get one ?
            // something like this; would retrieve one for me
            // int new_row = row + directions[2][0]
            // directions[2][0] according to our direction 2d array should return me with 1 and in that case it will return me with 0 to be added for the new col (which makes it stay the same)
            //
            // we can see that in both cases when we want a row the second [] of the direction array remains 0
            // now instead of hard-coding directions
            // we can do this: new_row = row + directions[d][0];
            // that means we can deduce col like this: new_col = col + directions[d][1];

            int new_row = row + directions[d][0];
            int new_col = col + directions[d][1];

            // check if the spots are valid (in bounds) and available
            if (new_col >= 0 && new_row >= 0 && new_row < N && new_col < N && random_walk[new_row][new_col] == '.')
            {
                // let's save where we are and try to move it
                row = new_row;
                col = new_col;
                random_walk[row][col] = ch++;
                moved = true;
                break;
            }
        }

        // if all four move trials were not successful
        if (!moved)
            break;
    }
}

/**
 * print_array - print walk array on stdout
 * @walk: random_walk array
 *
 * Return: nothing
 */
void print_array(char random_walk[10][10])
{
    for (int i = 0; i < N; i++)
    {
        for (int m = 0; m < N; m++)
        {
            putchar(random_walk[i][m]);
            putchar(' ');
        }
        putchar('\n');
    }
}
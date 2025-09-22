/* Write a program that generates a “random walk” across a 10 × 10 array. */
// draft 1.
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

#define N 10

int main(void)
{
    char random_walk[N][N];
    char ch = 'A';
    int direction;
    int row = 0;
    int col = 0;
    int round = 1;

    // initializer.
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            random_walk[i][m] = '.';
        }
    }

    // initial A
    random_walk[row][col] = ch++;

    int trials = 0;
    srand((unsigned) time(NULL));

    while(true) {
        // generate random direction
        direction = rand() % 4;

        if (direction == 0) {
            tryup:
            if (row - 1 >= 0 && random_walk[row - 1][col] == '.')
                random_walk[--row][col] = ch++;
            else if (trials >= 4) break;
            else {
                trials++;
                goto trydown;
            }
        } else if (direction == 1) {
            tryright:
            if (random_walk[row][col + 1] == '.' && col + 1 >= 0)
                random_walk[row][++col] = ch++;
            else if (trials >= 4) break;
            else {
                trials++;
                goto tryright;
            }
        } else if (direction == 2) {
            trydown:
            if (random_walk[row + 1][col] == '.') {
                random_walk[++row][col] = ch++;
            }
            else if (trials >= 4) break;
            else {
                trials++;
                goto tryleft;
            }
        } else {
            tryleft:
            if (col - 1 >= 0 && random_walk[row][col - 1] == '.') {
                random_walk[row][--col] = ch++;
            }
            else if (trials >= 4) break;
            else {
                trials++;
                goto tryup;
            }
        }

        // terminate when we have reached last alphabet.
        if (random_walk[row][col] == 'Z')
            break;

        // reset trials
        trials = 0;
    }


    // print random walk
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            putchar(random_walk[i][m]);
            putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
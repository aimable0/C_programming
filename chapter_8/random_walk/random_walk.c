/* Write a program that generates a “random walk” across a 10 × 10 array. */

#include <stdio.h>
#define N 10
int main(void)
{
    char random_walk[N][N];

    // initializer.
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            random_walk[i][m] = '.';
        }
    }

    // for (int i = 0; i < N; i++) {
    //     for (int m = 0; m < N; m++) {
    //         printf("%c ", random_walk[i][m]);
    //     }
    //     printf("\n");
    // }

    // random walk



    return 0;
}
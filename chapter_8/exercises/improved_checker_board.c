/* program fragment that declares an 8 × 8 char array named checker_board and
then uses a loop to store the following data */

#include <stdio.h>

int main(void)
{
    char checker_board[8][8];

    // for (int i = 0; i < 8; i++) {
    //     for (int m = 0; m < 8; m++) {
    //         if (m == 0) {
    //             if (i % 2 == 0)
    //                 checker_board[i][m] = 'B';
    //             else
    //                 checker_board[i][m] = 'R';
    //         } else {
    //             if (checker_board[i][m - 1] == 'B') {
    //                 checker_board[i][m] = 'R';
    //             } else {
    //                 checker_board[i][m] = 'B';
    //             }
    //         }
    //     }
    // }

    // shorter version..
    for (int i = 0; i < 8; i++) {
        for (int m = 0; m < 8; m++) {
            if ((i + m) % 2 == 0) {
                checker_board[i][m] = 'B';
            } else {
                checker_board[i][m] = 'R';
            }
        }
    }


    // print the checker_board
    for (int i = 0; i < 8; i++) {
        for (int m = 0; m < 8; m++) {
            printf("%c ", checker_board[i][m]);
        }
        printf("\n");
    }

    return 0;
}
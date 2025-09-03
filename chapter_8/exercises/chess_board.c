/* declaration for an 8 * 8 array named chess_board */
#include <stdio.h>

int main(void)
{
    const char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
                                    {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    // let's print it
    for (int i = 0; i < 8; i++) {
        for (int m = 0; m < 8; m++) {
            printf("%c ", chess_board[i][m]);
        }
        printf("\n");
    }

    return 0;
}
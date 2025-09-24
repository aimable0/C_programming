#include <stdio.h>

int evaluate_position(char board[8][8]);

int main()
{
}

int evaluate_position(char board[8][8])
{
    int sum_white = 0;
    int sum_black = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
                case 'Q':sum_white += 9;break;
                case 'q':sum_black += 9;break;
                case 'R':sum_white += 5;break;
                case 'r':sum_black += 5;break;
                case 'B':sum_white += 3;break;
                case 'b':sum_black += 3;break;
                case 'N':sum_white += 3;break;
                case 'n':sum_black += 3;break;
                case 'P':sum_white += 1;break;
                case 'p':sum_black += 1;break;
                default: break;
            }
        }
    }

    return sum_white - sum_black;
}
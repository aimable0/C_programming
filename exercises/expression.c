#include <stdio.h>

int main(void)
{
    int i = 2;
    int j = 0;

    /** Pseudo code: possible expression
     *  1 expression: (j == i) + ((j < i) - 1) + (j < i)
     *  2 expression: (j == i) + (2 * (j < i)) - 1)
     *  3 canonical expression: (i > j) - (i - j)
     */

    // cases. -> (j == i) + ((j < i) - 1) + (j < i)
    i = 2;
    j = 4;
    // i is less than j: -1
    printf("expresion : %d => -1\n", (j == i) + ((j < i) - 1) + (j < i)); //expected

    i = 0;
    j = 0;
    // i is equal to j: 0
    printf("expresion :  %d => 0\n", (j == i) + ((j < i) - 1) + (j < i)); // expected: 0

    i = 4;
    j = 1;
    // i greater than j: +1
    printf("expresion : %d => 1\n", (j == i) + ((j < i) - 1) + (j < i));

    // cases using second expression. -> (j == i) + (2 * (j < i)) - 1)
    i = 2;
    j = 4;
    // i is less than j: -1
    printf("expresion : %d => -1\n", (j == i) + (2 * (j < i)) - 1); //expected

    i = 0;
    j = 0;
    // i is equal to j: 0
    printf("expresion :  %d => 0\n", (j == i) + (2 * (j < i)) - 1); // expected: 0

    i = 4;
    j = 1;
    // i greater than j: +1
    printf("expresion :  %d => 1\n", (j == i) + (2 * (j < i)) - 1);

    i = 0;
    j = 1;
    printf("\n\n");
    printf("j >= i: %d\n", j >= i);
    // printf("j > i: %d\n", j > i);
    // printf("j < i: %d\n", j < i);

    return 0;
}
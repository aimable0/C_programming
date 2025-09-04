/* Program that computes the value of a word by summing the values of its letter as in SCRABBLE crossword Game */
// Modified:  that the SCRABBLE values of the letters are stored in an array.

#include <stdio.h>
#include <ctype.h>
#define SIZE 26

int main(void)
{
    int scores[SIZE] = {
        1,  // A
        3,  // B
        3,  // C
        2,  // D
        1,  // E
        4,  // F
        2,  // G
        4,  // H
        1,  // I
        8,  // J
        5,  // K
        1,  // L
        3,  // M
        1,  // N
        1,  // O
        3,  // P
        10, // Q
        1,  // R
        1,  // S
        1,  // T
        1,  // U
        4,  // V
        4,  // W
        8,  // X
        4,  // Y
        10  // Z
    };
    char letter;
    int value = 0;
    int sum = 0;


    printf("Enter a word: ");
    while((letter = getchar()) != '\n') {
        sum += scores[toupper(letter) - 65];
    }
    printf("Scrabble value: %d\n", sum);



    return 0;
}

/* A program that calculates the average word length for a sentence */

#include <stdio.h>


int main(void)
{
    // formular: letters/words
    // words = spaces + 1
    // letters = all letters - spaces

    // count spaces
    short spaces = 0;
    short tot_letters = 0; //other than spaces
    char ch = 'a';

    printf("Enter a sentence: ");
    //!\: notice below that we don't do while (ch = getchar() != '\n') because this would give ch = value of 1 or 0;
    // instead of the value of getchar.. which could make it impossible to trace where the space is.
    // so we do while ((ch = getchar()) != '\n) to make sure that first, the character is saved in ch and then checked to see if it's '\n'
    while((ch = getchar()) != '\n') {
        if (ch == ' ') {
            spaces++;
        } else {
            tot_letters++;
        }
    }

    printf("Average word length: %.1f\n", (float) (tot_letters) / (spaces + 1));

    return 0;
}
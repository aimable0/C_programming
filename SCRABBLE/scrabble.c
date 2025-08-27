/* Program that computes the value of a word by summing the values of its letter as in SCRABBLE crossword Game */

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char letter;
    short value = 0;
    short sum = 0;

    printf("Enter a word: ");
    while((letter = getchar()) != '\n') {
        switch (toupper(letter)) {
            case 'A': case 'E': case 'I':case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                value = 1; break;
            case 'D': case 'G':
                value = 2; break;
            case 'B': case 'C': case 'M': case 'P':
                value = 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value = 4; break;
            case 'K':
                value = 5; break;
            case 'J': case 'X':
                value = 8; break;
            case 'Q': case 'Z':
                value = 10; break;
            default: goto end; // quickly jump to the end to check next letter.
            // why use goto ? bcz: using break wouldn't stop the program to execute sum+= value
            // which is undesirable becuase we want to add value to sum only when its a letter
            // plus adding value even when its not alphabet (which could happend without goto end;)
            // -- could do us bad if the user tricked us with a number in the word..
            // the sum would be updated with the recent value. whith goto .. we skip char that are not alhabets and prevent that trap..
        }
        sum += value;
        end:;
    }
    printf("Scrabble value: %hd\n", sum);


    return 0;
}
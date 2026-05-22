/* Program that computes the value of a word by summing the values of its letter as in SCRABBLE crossword Game */

#include <stdio.h>
#include <ctype.h>
#define MAX_LEN 40

int compute_scrabble_value(const char *word)
{
    int value = 0;
    while(*word) {
        switch (toupper(*word)) {
            case 'A': case 'E': case 'I':case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                value += 1; break;
            case 'D': case 'G':
                value += 2; break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4; break;
            case 'K':
                value += 5; break;
            case 'J': case 'X':
                value += 8; break;
            case 'Q': case 'Z':
                value += 10; break;
            default: continue;
        }
        word++;
    }
    return value;
}

int main (void)
{
    short value;
    char word[MAX_LEN];

    printf("Enter a word: ");
    scanf("%s", word);
    value = compute_scrabble_value(word);
    printf("Scrabble value: %hd\n", value);

    return 0;
}
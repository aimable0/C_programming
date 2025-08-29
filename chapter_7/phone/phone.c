/* Program that translates an alphabet phone number into numeric form */

#include <stdio.h>

int main(void)
{
    // code - letters : ABC = 2, DEF = 3, GHI = 4, JKL = 5, MNO = 6, PRS = 7, TUV = 8, WXY = 9
    // ASSUMPTION: all letters entered by the user are upper case.
    char letter;

    printf("Enter phone number: ");
    while ((letter = getchar()) != '\n') {
        switch (letter) {
            case 'A': case 'B': case 'C': letter = '2'; break;
            case 'D': case 'E': case 'F': letter = '3'; break;
            case 'G': case 'H': case 'I': letter = '4'; break;
            case 'J': case 'K': case 'L': letter = '5'; break;
            case 'M': case 'N': case 'O': letter = '6'; break;
            case 'P': case 'R': case 'S': letter = '7'; break;
            case 'T': case 'U': case 'V': letter = '8'; break;
            case 'W': case 'X': case 'Y': letter = '9'; break;
            default: break; // the user letter is a number or a punctuation hence we don't change it.
        }
        printf("%c", letter);
    }
    printf("\n");

    return 0;
}
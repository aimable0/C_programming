/* Write a “B1FF filter” that reads a message entered by the user and translates it into B1FF-speak */

#include <stdio.h>
#include <ctype.h>
#define ROW 2
#define COL 6

int main(void)
{
    // b1ff-set: (A→4, B→8, E→3, I→1, O→0, S→5),
    const char b1ff_chars[2][6] = {{'A', 'B', 'E', 'I', 'O', 'S'}, {'4', '8', '3', '1', '0', '5'}};

    char ch;
    printf("Enter message: ");
    int i = 0;
    while((ch = getchar()) != '\n') {
        if (i == 0) {
            i++;
            printf("In B1FF-speak: ");
        }
        // convert letters to UPPERCASE AND B1FF
        for (int i = 0; i < 1; i++) {
            for (int m = 0; m < 6; m++) {
                if (toupper(ch) == b1ff_chars[i][m]) {
                    printf("%c", b1ff_chars[i + 1][m]);
                    goto getnextchar;
                }
            }
            printf("%c", toupper(ch));
        }
        getnextchar:;
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
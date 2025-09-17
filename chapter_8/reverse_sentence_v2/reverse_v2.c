/* A program that reverses the words in a sentence */
//!\ works but needs refinement.

#include <stdio.h>

int main(void)
{
    char sentence[100];
    int l = 0; // will be used to store characters in the array
    char last_char;
    // store user's sentence to reverse
    printf("Enter a sentence: ");
    char ch;
    while((ch = getchar()) != '\n') {
        if (ch != '?' && ch != '.' && ch != '!') {
            sentence[l] = ch;
            l++;
            continue;
        }
        last_char = ch;
        l--; // to make sure we don't exceed the array length
        break;
    }

    // check array length.
    // printf("length: %d\n\n\n", l);


    char cursor; // hold current letter we are looking at
    int size = 0; // size of the word we want to print in reverse.
    int len = l;
    int g = 0; // used to print only one space after the first last word.
    while (1) {
        cursor = sentence[len];
        if (cursor == ' ') {
            size = l - len;
            // printf("current l = %d\n", l);
            // printf("current len = %d\n", len);
            // printf("current size (l - len): %d\n", size);
            int c = len + 1;
            // printf("c = %d\n", c);
            for (int i = 0; i < size; i++) {
                putchar(sentence[c++]);
            }

            // printf("\nlast c index: %d\n", c);
            if (g == 0)
            {
                putchar(' ');
                g++;
            }
            l -= size;
        }
        if (cursor == sentence[0] && len == 0) {
            // printf("len here is %d\n", len);
            size = l - len;
            // printf("size: %d\n", size);
            for (int i = 0; i < size; i++) {
                putchar(sentence[i]);
            }
            putchar(last_char);
            putchar('\n');
            break;
        }
        --len;
    }
    return 0;
}
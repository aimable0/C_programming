/* A program that reverses the words in a sentence */
// This is dumy draft..
#include <stdio.h>

int main(void)
{
    char sentence[80];
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
        break;
    }

    // write the last word only.
    char cursor;
    int len = l;
    while (cursor != ' ') {
        cursor = sentence[len];
        --len;
    }
    int len_cpy = len;


    // printf("last word: ");
    len++;
    int size = (l - len);
    for (int i = 0; i < size; i++) {
        putchar(sentence[++len]);
    }
    printf(" ");

    // // second last word
    cursor = 'a';
    int len_2 = len_cpy;
    while (cursor != ' ' && cursor != sentence[0]) {
        cursor = sentence[len_cpy];
        --len_cpy;
    }

    // first word .. haha
    // printf("last word: ");
    size = len_2 - len_cpy;
    // printf("size: %d\n", size);
    for (int i = 0; i < size + 1; i++) {
        putchar(sentence[len_cpy++]);
    }
    putchar(last_char);
    printf("\n");


    return 0;
}
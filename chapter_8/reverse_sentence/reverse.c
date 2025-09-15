/* a program that reverses the words in a sentence */

#include <stdio.h>
#define SENTENCE_LEN_MAX 100

int main(void)
{
    char sentence_array[SENTENCE_LEN_MAX];
    char ch;

    printf("Enter a sentence: ");
    int len = 0;
    while ((ch = getchar()) != '\n') {
        sentence_array[len] = ch;
        len++;
    }
    sentence_array[len] = '\0'; // terminate the string.


    // Let's assumme that the words will swap places.
    for (int i = len; i >= 0; i--) {
        if (sentence_array[i] == ' ') {
            for (int m = 0; m < (len - i); m++) {
                printf("%c", sentence_array[i + 1 + m]);
            }
            len -= len - i;
            printf("%c", sentence_array[i]);
        }
    }
    printf("\n");

    return 0;
}
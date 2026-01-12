// use pointers to achieve the following.
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?

#include <stdio.h>

int main(void)
{
    char sentence[100];
    int i = 0;
    char ch;
    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n') {
        sentence[i++] = ch;
    }
    i--;

    char last_char = sentence[i];
    char *p = &sentence[i - 1];
    char *start = sentence;
    char *word;
    int w_len;

    printf("Reversal of sentence: ");
    while(start - 1 <= p) {
        if (*p == ' ' || p == start) {
            word = (p == start) ? p : p + 1;
            while(w_len > 0) {
                if (*word != ' ')
                    printf("%c", *word++);
                w_len--;
            }
            printf(" ");
        }
        w_len++;
        p--;
    }
    printf("\b%c\n", last_char); // we are starting with \b to delete extra space.

    return 0;
}

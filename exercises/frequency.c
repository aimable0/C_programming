#include <stdio.h>


int main(void)
{
    int words_length_frequency[20] = {0};
    int current_word_length = 0;
    int length = 0;
    char ch;

    printf("Enter sentence length: ");
    scanf("%d", &length);
    getchar(); // clear any leftover newline after input one

    char word[11];

    for (int i = 0; i < length; i++) {
        scanf("%s", word);
        for (int j = 0; word[j] != '\0'; j++)
            current_word_length++;

        words_length_frequency[current_word_length] += 1;
        current_word_length = 0; // reset word length
    }

    // display frequencies of word length
    for (int i = 0; i < length; i++) {
        if (words_length_frequency[i] != 0)
            printf("%d %d\n", i, words_length_frequency[i]);
    }

    return 0;
}
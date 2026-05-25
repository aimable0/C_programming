#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHARS 20
#define MAX_WORDS 30

void reverse_sentence(char sentence_words[MAX_WORDS][MAX_CHARS], int words)
{
    int words_i = words - 1;
    char temp[MAX_CHARS];
    for (int i = 0; i < words / 2; i++)
    {
        strcpy(temp, sentence_words[i]);
        strcpy(sentence_words[i], sentence_words[words_i - i]);
        strcpy(sentence_words[words_i - i], temp);
    }
}

int parse_sentence(char *sentence, char sentence_words[MAX_WORDS][MAX_CHARS])
{
    char *s = sentence;
    int i = 0, j = 0;
    while (true)
    {
        if (*s == ' ' || !*s)
        {
            sentence_words[i][j] = '\0';
            i++;
            j = 0;

            if (!*s)
                break;
        }
        else
        {
            sentence_words[i][j++] = *s;
        }
        s++;
    }
    return i;
}

void read_line(char *word)
{
    char ch;
    while ((ch = getchar()) != '\n')
        *word++ = ch;
    *word = '\0';
}

int main(void)
{
    char sentence[601];
    char sentence_words[MAX_WORDS][MAX_CHARS];
    int words = 0;
    printf("\nEnter a sentence: ");
    read_line(sentence);
    words = parse_sentence(sentence, sentence_words);
    printf("You entered this: ");
    for (int k = 0; k < words; k++)
        printf("%s ", sentence_words[k]);
    printf("\n\n");
 
    printf("Sentence reverse: ");

    // handle store punctuation.
    char punctuation = sentence_words[words - 1][strlen(sentence_words[words - 1]) - 1];
    sentence_words[words - 1][strlen(sentence_words[words - 1]) - 1] = '\0';
    reverse_sentence(sentence_words, words);
    sentence_words[words - 1][strlen(sentence_words[words - 1])] = punctuation;
    for (int k = 0; k < words; k++)
        printf("%s ", sentence_words[k]);
    printf("\n\n");

    return 0;
}
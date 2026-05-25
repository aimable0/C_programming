#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2)
{
    if (strlen(word1) != strlen(word2))
        return false;

    int ltr_word1[strlen(word1)];
    int ltr_word2[strlen(word2)];
    
    int letters_array[26];

    char *w1 = word1;
    char *w2 = word2;

    int i = 0;
    while (*word1)
        ltr_word1[i++] = *word1++;

    i = 0;
    while (*word2)
        ltr_word2[i++] = *word2++;

    // compare arrays
    for (int i = 0, len1 = strlen(w1); i < len1; i++)
    {
        for (int j = 0, len2 = strlen(w2); j < len2; j++)
        {
            if (ltr_word1[i] == ltr_word2[j])
            {
                ltr_word1[i] = 0;
                ltr_word2[j] = 0;
                break;
            }
            if (ltr_word1[i] != ltr_word2[j] && j + 1 != len2)
                continue;
            return false;
        }
    }
    return true;
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
    char word1[40];
    char word2[40];

    printf("Enter first word: ");
    read_line(word1);
    printf("Enter second word: ");
    read_line(word2);
    bool answer = are_anagrams(word1, word2);
    if (answer)
        printf("Words are anagrams\n");
    else
        printf("Words are not anagrams\n");
    return 0;
}

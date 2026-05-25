#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define LETTERS 26
#define MAX_LEN 40

bool are_anagrams(const char *word1, const char *word2)
{
    // Logic:
    // initialize all letter appearance to zero in an array.
    // add letters's apperance of word1
    // subtrack letter's apprearance of word2
    // check if array contains all zero.
    int letter_arrays[LETTERS] = {0};
    while (*word1)
        letter_arrays[tolower(*word1++) - 97] += 1;
    while (*word2)
        letter_arrays[tolower(*word2++) - 97] -= 1;
    for (int i = 0; i < LETTERS; i++)
        if (letter_arrays[i] != 0)
            return false;
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
    char word1[MAX_LEN];
    char word2[MAX_LEN];

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

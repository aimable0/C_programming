/* Program that counts vowels in a sentence */

#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence)
{
    int count = 0;
    while (*sentence)
    {
        switch (toupper(*sentence))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        default:;
        }
        sentence++;
    }

    return count;
}

int main(void)
{
    char ch; // this will store user's sentence letter
    short count = 0;
    char word[40];
    printf("Enter a sentence: ");
    scanf("%s", word);
    count = compute_vowel_count(word);
    printf("Your sentence contains %hd vowels.\n", count);
}
/* A program that calculates the average word length for a sentence */

#include <stdio.h>
#define MAX_LEN 255

double compute_average_word_length(const char *sentence)
{
    double tot_letters = 0;
    double spaces = 0;
    while (*sentence)
    {
        if (*sentence == ' ')
            spaces++;
        else
            tot_letters++;
        sentence++;
    }
    return tot_letters / (spaces + 1);
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
    char sentence[MAX_LEN];
    double avg = 0;
    read_line(sentence);
    puts(sentence);
    avg = compute_average_word_length(sentence);
    printf("Average word length: %f\n", avg);
    return 0;
}
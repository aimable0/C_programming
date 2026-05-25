#include <stdio.h>
#include <string.h>
#define LIMIT 200

void read_line(char *line)
{
    char ch;
    while ((ch = getchar()) != '\n')
        *line++ = ch;
    *line = '\0';
}

void reverse(char *message)
{
    char *s = message;
    char *e = message + (strlen(message) - 1);

    char temp;
    for (; s != e && e > s; e--, s++)
    {
        temp = *s;
        *s = *e;
        *e = temp;
    }
}

int main(void)
{
    char sentence[LIMIT];
    printf("Enter a message: ");
    read_line(sentence);
    reverse(sentence);
    printf("Reversal is: ");
    puts(sentence); // reversed
    return 0;
}
/* Program: program that takes a first name and last name entered by the user
   and displays the last name, a comma, and the first initial, followed by a period. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LEN 255

void reverse_name(char *name)
{
    char *name_p = name;
    char initial = name[0];
    while (*name++ != ' ')
        ;
    sprintf(name_p, "%s, %c.", name, initial);
}

void read_name(char *name)
{
    char ch = 0;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i == 0 && ch == ' ') // skip spaces at the beginning
            continue;
        if (i > 0 && ch == ' ' && name[i - 1] == ' ') // skip middle spaces
            continue;
        name[i++] = ch;
    }
    if (name[i - 1] == ' ')
        name[i - 1] = '\0';
    else
        name[i] = '\0';
}

int main(void)
{
    printf("Enter a first and last name: ");
    char name[MAX_LEN];
    read_name(name);
    reverse_name(name);
    printf("%s\n", name);
    return 0;
}
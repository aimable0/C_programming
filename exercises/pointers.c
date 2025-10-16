#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

char *_strcpy(char *dest, char *src)
{

    int len = 0;
    int i = 0;
    char temp;

    while (src[len] != '\0')
    {
        len++;
    }

    for(i = 0; i <= len; i++)
    {
        temp = src[i];
        dest[i] = temp;
    }
    return dest;
}
#include <stdio.h>

#define LIMIT 100

int main(void)
{
    char sentence[LIMIT];
    int len = 0;
    char *ptr = sentence;
    char l = 0;
    while((*ptr = getchar()) != '\n') {
        len++;
        ptr++;
    }

    *ptr--; //
    while(len > 0) {
        printf("%c", *ptr--);
        len--;
    }
    printf("\n");

    return 0;
}
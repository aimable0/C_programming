#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main(void)
{
    char sentence[MAX];
    int i = 0;
    char ch;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n') {
        if (isalpha(ch))
            sentence[i++] = tolower(ch);
    }
    i--;

    char *start = &sentence[0];
    char *end = &sentence[i];

    while(i > 0) {
        if (*start++ != *end--) {
            printf("Not Palindrome\n");
            return 1;
        }
        i--;
    }
    printf("Palindrome\n");
    return 0;
}
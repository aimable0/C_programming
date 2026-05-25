#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_LEN 200
void read_line(char *line)
{
    char ch;
    while ((ch = getchar()) != '\n')
        *line++ = ch;
    *line = '\0';
}

bool is_palindrome(const char *message)
{
    char *s = message;
    char *e = message + (strlen(message) - 1);

    // printf("comparing: %c vs %c\n", tolower(*s), tolower(*e));
    while (s != e && e > s)
    {
        if (isalpha(*s))
        {
            if (isalpha(*e))
                if (tolower(*s) != tolower(*e))
                {
                    return false;
                }
                else
                {
                    s++;
                    e--;
                }
            else
            {
                e--;
            }
        }
        else
        {
            s++;
        }
    }
    return true;
}

int main(void)
{
    char message[MAX_LEN];
    bool result;
    printf("Enter a message: ");
    read_line(message);
    result = is_palindrome(message);
    if (result)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

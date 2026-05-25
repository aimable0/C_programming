#include <stdio.h>
#include <ctype.h>
#define MAX 80

void encrypt(char *message, int shift)
{
    while (*message)
    {
        if (isalpha(*message))
        {
            if (islower(*message) && (*message + shift) > 122)
                if (122 % (*message + shift) == 122)
                    *message = ((*message + shift) % 122) + 'a' - 1;
                else
                    *message = (122 % *message) + 'a';
            else if (isupper(*message) && (*message + shift) > 90)
                if (90 % (*message + shift) == 90)
                    *message = ((*message + shift) % 90) + 'A' - 1;
                else
                    *message = (90 % *message) + 'A';
            else
                *message = *message + shift;
        }
        message++;
    }
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
    char message[MAX];
    int shift = 0;
    printf("Enter message to encrypted: ");
    read_line(message);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);
    return 0;
}

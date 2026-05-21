#include <stdio.h>

char *censor(char *string)
{
    char *s = string;
    while (*s)
    {
        if (*s == 'f' && (*(s + 1) == 'o') && (*(s + 2) == 'o'))
        {
            for (int i = 0; i < 3; i++, s++)
                *s = 'x';
            continue;
        }
        s++;
    }
    return string;
}

int main(void)
{
    // test
    char sample[255] = "food fool";
    puts(censor(sample));
    return 0;
}

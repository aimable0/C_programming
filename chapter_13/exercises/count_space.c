#include <stdio.h>

int count_space(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}

int conds_count_space(const char *s)
{
    int count = 0;
    while(*s)
        if (*s++ == ' ')
            count++;
    return count;
}

int main(void)
{
    char sample[255] = "Fiona is a beautiful friend!";
    int spaces = count_space(sample);

    printf("spaces: %d\n", spaces);
    return 0;
}

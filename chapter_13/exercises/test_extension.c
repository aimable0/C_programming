#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension)
{
    while (*file_name++ != '.')
        ; // a '.' is taken for granted

    // make a copy of extension
    char *ext_cpy = malloc(strlen(extension));
    strcpy(ext_cpy, extension);

    char *e = ext_cpy;
    while (*ext_cpy)
    {
        *ext_cpy = tolower(*ext_cpy);
        ext_cpy++;
    }

    if (strcmp(file_name, e) == 0)
        return true;
    return false;
}

int main(void)
{
    char file_name[] = "memo.tsxt";
    char extension[] = "TXT";
    bool test = test_extension(file_name, extension);

    if (test)
        puts("TRUE");
    else
        puts("FALSE");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_extension(const char *file_name, char *extension)
{
    int len = strlen(file_name);
    while(len != 0)
    {
        if (*file_name++ == '.')
            break;
        len--;
    }
    if (len)
        strcpy(extension, file_name);
    else
        strcpy(extension, "");
}


int main(void)
{
    char file1[255] = "memo.pdf";
    char ext[255] = "";

    get_extension(file1, ext);
    puts(file1);
    puts(ext);
}



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void remove_filename(char *url)
{
    int count = 0;
    while (*url)
    {
        if (*url == '/')
        {
            if (count == 2)
            {
                *url = '\0';
                return;
            }
            else
            {
                count++;
            }
        }
        url++;
    }
}

int main(void)
{
    //! Note
    // char *url = "http://www.knking.com/index.html";
    // this uses a pointer to a string literal
    // and attempting to edit it will cause a bus error
    // ex url[0] = 'w' // -> Bus error: 10
    // bcz string literal in this manner are stored in read-only memory.
    //! End note

    // Alternative 1.
    // char *url = malloc(255);
    // strcpy(url, "http://www.knking.com/index.html");

    // Alternative 2
    char url[] = "http://www.knking.com/index.html"; // this perphaps the best way to initialize string.
    puts(url);
    remove_filename(url);
    puts(url);
    return 0;
}

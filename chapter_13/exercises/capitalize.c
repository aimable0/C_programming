#include <stdio.h>
#include <ctype.h>

char *capitalize(char *word)
{
    char *s = word;
    while (*word)
    {
        *word = toupper(*word);
        word++;
    }
    return s;
}

int main(void)
{
    // char *sample = "aimable";
    // Here we are using string literal, hence trying to modify it should cause an error.
    //Bus error: 10, caused by SIGBUS is a runtime error related to memory access issues.

    // correct version.
    char sample[255] = "aimable";
    puts(capitalize(sample));

    // some notes about Memory issues
    // Segmentation fault (SIGSEGV) -> Accessed memory you are not allowed to access
    // Bus error (SIGBUS)           -> Memory access itself is physically invalid or improperly aligned
}

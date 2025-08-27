/* Program that counts vowels in a sentence */

#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char ch; // this will store user's sentence letter
    short count = 0;

    printf("Enter a sentence: ");
    while((ch = getchar())!= '\n') {
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'O':case 'U': count++; break;
            default: goto end; // jump to the end to quickly check the next letter.
        }
        end:;
    }

    printf("Your sentence contains %hd vowels.\n", count);
}
/* more clear and improved version of name.c */
// Improvements: it is more clear and handles graciously extra spaces.
// be it at the beginning of first name, in the middle (bt 2names) and at the end of last name.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    char first_initial;

    // get the first letter and skip extra spaces at the beginning.
    scanf(" %c", &ch);
    first_initial = ch;

    while((ch = getchar())) {
        if (ch != ' ') {
            continue; // skip all the other letters of the first name until you get at the first space between first and second name.
        } else if (ch == ' '){
            while((ch = getchar())) {
                if (ch == ' ') {
                    continue; // skip all spaces between the first and second name.
                } else if (ch != '\n') {
                    printf("%c", ch); // print letters of second name.
                } else if (ch == '\n') {
                    printf(", %c.\n", first_initial); // print the first initial.
                    goto end;
                }
            }
        }
        end: break; //!\: this will still fall through.. if it happends to be reached in execution.
    }

    return 0;
}
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
        } else {
            while((ch = getchar())) {
                if (ch == ' ') {
                    continue; // skip extra spaces between the first and second name.
                } else if (ch != '\n') {
                    printf("%c", ch); // print only letters.
                } else if (ch == '\n') {
                    printf(", %c.\n", first_initial); // print the first letter.
                    goto end;
                }
            }
        }
        end: break;
    }

    return 0;
}
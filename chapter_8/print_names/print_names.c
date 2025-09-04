/* Program: program that takes a first name and last name entered by the user
   and displays the last name, a comma, and the first initial, followed by a period. */

#include <stdio.h>
#include <ctype.h>
#define LAST_NAME_MAX_SIZE 20
int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    char first_initial;
    char last_name[LAST_NAME_MAX_SIZE];

    // get the first letter and skip extra spaces at the beginning.
    scanf(" %c", &ch);
    first_initial = ch;

    int i = 0; // for subscripting last name array
    while((ch = getchar())) {
        if (ch != ' ') {
            continue;       // skip all the other letters of the first name until you get at the first space between first and second name.
        } else if (ch == ' '){
            while((ch = getchar())) {
                if (ch == ' ') {
                    continue;       // skip all spaces between the first and second name.
                } else if (ch != '\n') {
                    last_name[i] = ch;      // save letters of the second name.
                    i++;
                } else if (ch == '\n') {
                    goto end; // break.
                }
            }
        }
        end: break;
    }
    last_name[i] = '\0'; // add null terminator to mark the end of first name string.

    // print formated names
    printf("You entered the name: ");
    for (int i  = 0; i < LAST_NAME_MAX_SIZE; i++) {
        if (last_name[i] == '\0') {
            printf(", %c.\n", first_initial);
            break;
        }
        printf("%c", last_name[i]);
    }

    return 0;
}
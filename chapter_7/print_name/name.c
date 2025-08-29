/* Program: program that takes a first name and last name entered by the user
   and displays the last name, a comma, and the first initial, followed by a period. */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    short i = 0;
    char first_char;
    short second_name_len = 0;
    short first_name_len = 0;

    while((ch = getchar())) {
        // let's store the first letter.
        if (i == 0) {
            while(getchar() == ' ');
            first_char = ch;
        }
        i++;

        if (ch == ' ') {
            first_name_len = i;
            printf("\r"); // carriage return to bring the cursor at the beginning so as to start printing second name.
        }
        else {
            if (ch == '\n') {
                printf(", %c.", first_char);

                // placebo fix ..
                second_name_len = i - first_name_len;
                for (int m = 0; m < (first_name_len - second_name_len) + 2; m++) {
                    printf(" ");
                }
                break; //end loop.
                //!\ next fix .. how do we deal with extra spaces..
            } else {
                printf("%c", ch);
            }
        }
    }
    printf("\n");
}
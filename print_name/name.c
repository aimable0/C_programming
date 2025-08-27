#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a first and last name: ");
    char ch;
    short i = 0;
    char first_char;
    // we want to use carriage return and exit..
    short second_name_len = 0;
    short first_name_len = 0;

    while((ch = getchar())) {
        // let's store the first letter.
        if (i == 0) {
            first_char = ch;
        }
        i++;

        if (ch == ' ') {
            first_name_len = i;
            printf("\r");
        }
        else {
            if (ch == '\n') {
                printf(", %c.", first_char);

                // placebo fix ..
                second_name_len = i - first_name_len;


                //!\ next fix .. how do we deal with extra spaces..
                
                for (int m = 0; m < (first_name_len - second_name_len) + 2; m++) {
                    printf(" ");
                }

                break; //end loop.
            } else {
                printf("%c", ch);
            }
        }
    }
    printf("\n");
}
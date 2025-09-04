#include <stdio.h>
#include <ctype.h>
#define N 100

int main(void)
{
    const char b1ff_chars[2][6] = {{'A', 'B', 'E', 'I', 'O', 'S'}, {'4', '8', '3', '1', '0', '5'}};
    char user_message[N];

    // get and calculate user message's length
    printf("Enter message: ");
    char ch;
    int len = 0;
    while((ch = getchar()) != '\n') {
        user_message[len] = toupper(ch);
        len++;
    }
    //!\: we could also need to add a null terminator at the end of the string in some cases.


    for(int i = 0; i < len; i++) {
        for (int m = 0; m < 6; m++) {
            if (user_message[i] == b1ff_chars[0][m]) {
                printf("%c", b1ff_chars[1][m]);
                goto nextchar;
            }
        }
        printf("%c", user_message[i]);
        nextchar:;
    }
    printf("\n");
    return 0;
}
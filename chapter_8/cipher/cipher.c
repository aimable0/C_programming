/* A program that encrpyts and decrpyts sentences using Caesar's cipher */
//!\ working but needs to be refined.

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char message[80];
    char ch; // to hold current user letters as we store them
    int shift_amount = 0;
    int l = 0;

    printf("Enter message to encrypted: ");
    // store the user's message.
    while((ch = getchar())!= '\n') {
        message[l] = ch;
        l++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    // print with cipher
    printf("Encrypted message: ");
    for (int i = 0; i < l; i++) {
        if (isalpha(message[i])) {
            if (islower(message[i]) && (message[i] + shift_amount) > 122){
                if (122 % (message[i] + shift_amount) == 122) {
                    putchar(((message[i] + shift_amount) % 122) + 'a' - 1);
                } else {
                    putchar((122 % message[i]) + 'a');
                }

                // test something new
                // putchar(((ch - 'A') + shift_amount) % 26 + 'a');
            }
            else if (isupper(message[i]) && (message[i] + shift_amount) > 90) {
                if (90 % (message[i] + shift_amount) == 90) {
                    putchar(((message[i] + shift_amount) % 90) + 'A' - 1);
                } else {
                    putchar((90 % message[i]) + 'A');
                }

                // test something new
                // putchar(((ch - 'A') + shift_amount) % 26 + 'A');
            }
            else {
                putchar(message[i] + shift_amount);
            }
        } else {
            putchar(message[i]);
        }

    }
    printf("\n");

    return 0;
}
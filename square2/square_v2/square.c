#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    // Issue: the newline after providing new number of entries is kind being caught as the first char in my getchar..
    scanf("%d", &n);
    getchar(); // This will automaticaly to take the newline pressed by the user after providing numebr of entries
    // so that our next getchar wont get it first and cause our program to skip the first section of 24 squares.

    short number_of_squares = 1; // to detect how many squares have been printed so fat
    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
        if (number_of_squares % 24 == 0) {
            printf("Press Enter to continue...");
            while(getchar() != '\n'); //!\notice that this while has an empty body indicated by the ';' at the end
        }
        number_of_squares++;
    }

    return 0;
}
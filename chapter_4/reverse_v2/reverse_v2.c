// Author: N Aimable
// Note: This extends from the reverse original version.
// Modification: Generalize version such that the program so that the number can have one,
// two, three, or more digits

#include <stdio.h>

int main(void)
{
    printf("Enter any-digits number: ");

    int num, last_num;
    do {
        scanf("%d", &num);
        printf("The reversal is: %s", (num == 0) ? "0" : "");      // I agree that this is not really the best way to handle zero hhhh
        while (num != 0) {
            last_num =  num % 10;
            printf("%d", last_num);
            num /= 10;
        }
        printf("\n");
    } while (num > 0);

    return 0;
}
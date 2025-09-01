/* Improved version of repeated_digits.c program */
/* Note: This is only possible with C99 standard version */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false}; // all elements are set to value = false
    long number;
    printf("Enter a number: ");
    scanf("%ld", &number);

    int n = number % 10;
    while(number != 0) {
        if (digit_seen[n] == true) {
            printf("Repeated digit\n");
            goto end;
        } else {
            digit_seen[n] = true;
            number = (number - (number % 10)) / 10;
            n = number % 10;
        }
    }
    printf("No repeated digit\n");

    end: return 0;
}
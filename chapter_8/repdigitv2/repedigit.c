#include <stdbool.h> /* C99 only */
#include <stdio.h>


int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num > 0) {
        n = num;
        while (n > 0) {
            digit = n % 10;
            if (digit_seen[digit])
            break;
            digit_seen[digit] = true;
            n /= 10;
        }
        if (n > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");

        // recieve and check another number
        printf("Enter a number: ");
        scanf("%ld", &num);
    }

    return 0;
}
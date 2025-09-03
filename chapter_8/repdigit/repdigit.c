#include <stdbool.h>
#include <stdio.h>
/* C99 only */
int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    int i = 0;
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {

        }
        digit_seen[digit] = true;
        n /= 10;
    }
    printf("\n");

    return 0;
}
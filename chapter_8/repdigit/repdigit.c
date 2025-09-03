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

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            goto getnewnumber;

        digit_seen[digit] = true;
        getnewnumber: n /= 10;
    }

    // print repeated digits
    printf("Repeated digits: ");
    for (int i  = 0; i < 10; i++) {
        if (digit_seen[i])
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
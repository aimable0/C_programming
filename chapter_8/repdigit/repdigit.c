#include <stdio.h>
/* C99 only */
int main(void)
{
    int digit_seen[10][1] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit][0])
            digit_seen[digit][0] += 1;
        else {
            digit_seen[digit][0] = 1;
        }
        n /= 10;
    }
    // repeated digits.
    int k = 0; // to help print  strng "repeated digits" once and only when they are some.
    for (int i = 0; i < 10; i++) {
        if (digit_seen[i][0] > 1) {
            if (k == 0) {
                printf("Repeated digit(s): ");
                k++;
            }
            printf("%d ", i);
        }
    }
    printf("\n");

    // print repeated digits and occurances table
    printf("Digit:       ");
    for (int i = 0; i < 10; i++) {
        printf("%3d", i);
    }
    printf("\n");
    printf("Occurences:  ");
    for (int i = 0; i < 10; i++) {
        printf("%3d", digit_seen[i][0]);
    }
    printf("\n");

    return 0;
}
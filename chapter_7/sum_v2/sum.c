#include <stdio.h>
int main(void)
{
    // program that sums a seires of integers
    // long n, sum = 0;
    // printf("This program sums a series of integers.\n");
    // printf("Enter integers (0 to terminate): ");
    // scanf("%ld", &n);

    // while (n != 0) {
    //     sum += n;
    //     scanf("%ld", &n);
    //  }

    // printf("The sum is: %ld\n", sum);

    // task: modifying the program above such that it sums a series of double values

    double n, sum = 0.0;
    printf("This program sums a series of double.\n");
    printf("Enter double (0.0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0.0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %.2f\n", sum);

    return 0;
}
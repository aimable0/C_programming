/* Creates an array that stores the first 40 fibonacci numbers */

#include <stdio.h>
#define LENGTH 40
int main(void)
{
    int fib_numbers[LENGTH] = {0, 1};

    for (int i = 2; i < LENGTH; i++) {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }

    // print first 40 fibonnaci number
    for (int i = 0; i < LENGTH; i++) {
        printf("%d, ", fib_numbers[i]);
    }
    printf("\n");

    return 0;
}
/* test wether a number is a prime */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    // test n with modulos of 2 and sqaure root of n. if its ever zero then 'ts not prime

    if (n <= 1)
        return false;

    for (int divisor = 2; divisor * divisor <= n; divisor++)
        if (n % divisor == 0)
            return false;
    return true;
}

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_prime(n))
        (void) printf("Prime\n");
    else
        (void) printf("Not prime\n");

    return 0;

    // did you know you can do something like this
    // num_chars = printf("Hi, Mom!\n"); // and this printf function will return the number of chars printed.
}
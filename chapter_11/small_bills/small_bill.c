// Author: N Aimable
// Purpose: Displays smallest number of $20, $10, $5, $1 bills:
// Date created: 6/08/2025
// Date modified: 17 Dec 2025 (to include function)

#include <stdio.h>

void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    // bills :$20, $10, $5, $1

    int dollars;
    int twenties, tens, fives, ones;

    printf("Enter a dollar amounts (Integer): ");
    scanf("%d", &dollars);

    if (dollars >= 0)
    {
        // function here.
        pay_dollars(dollars, &twenties, &tens, &fives, &ones);

        printf("$20 bills: %d\n", twenties);
        printf("$10 bills: %d\n", tens);
        printf(" $5 bills: %d\n", fives);
        printf(" $1 bills: %d\n", ones);
    }
    else
    {
        printf("Wrong input!\n");
    }



    return 0;
}

void pay_dollars(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;

    dollars -= (20 * (*twenties));

    *tens = dollars / 10;
    dollars -= (10 * (*tens));

    *fives = dollars / 5;
    dollars -= (5 * (*fives));

    *ones = dollars / 1;
}
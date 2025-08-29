// Author: N Aimable
// Purpose: Displays smallest number of $20, $10, $5, $1 bills:
// Date: 6/08/2025

#include <stdio.h>

int main(void)
{
    // bills :$20, $10, $5, $1

    int amount;

    printf("Enter a dollar amount (Integer): ");
    scanf("%d", &amount);

    if (amount >= 0)
    {
        int twnty_bills_count = amount / 20;

        amount -= (20 * twnty_bills_count);

        int ten_bills_count = amount / 10;
        amount -= (10 * ten_bills_count);

        int five_bills_count = amount / 5;
        amount -= (5 * five_bills_count);

        int one_bills_count = amount / 1;

        printf("$20 bills: %d\n", twnty_bills_count);
        printf("$10 bills: %d\n", ten_bills_count);
        printf(" $5 bills: %d\n", five_bills_count);
        printf(" $1 bills: %d\n", one_bills_count);
    }
    else
    {
        printf("Wrong input!\n");
    }



    return 0;
}
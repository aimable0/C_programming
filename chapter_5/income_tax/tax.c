// Author: N Aimable
// Purpose: calculates tax due based on user's taxable income
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{
    float amount = 1000;

    printf("Enter Income: ");
    scanf("%f", &amount);
    
    // programmimg expected ranges
    float tax;
    if (amount > 7000)
    {
        tax = 230.00 + (0.06 * (amount - 7000));
    }
    else if (amount >= 5250)
    {
        tax = 142.50 + (0.05 * (amount - 5250));
    }
    else if (amount >= 3750)
    {
        tax = 82.50 + (0.04 * (amount - 3750));
    }
    else if (amount >= 2250)
    {
        tax = 37.50 + (0.03 * (amount - 2250));
    }
    else if (amount >= 750)
    {
        tax = 7.50 + (0.02 * (amount - 750));
    }
    else
    {
        tax = 0.01 * amount;
    }

    printf("Amount: %.2f\n", amount);
    printf("Tax: %.2f\n", tax);
}
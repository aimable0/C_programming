// Author: N Aimable
// Purpose: calculates tax due based on user's taxable income
// Date: 15/08/2025
// Modified: 21/11/2025 - to break the logci into functions.

#include <stdio.h>

// protototypes
float compute_tax(float);

/**
 * main - program entry point.
 *
 * Return: 0 on success and 1 on error
 */
int main(void)
{
    float amount = 1000;
    float tax;

    printf("Enter Income: ");
    scanf("%f", &amount);

    tax = compute_tax(amount);
    printf("Amount: %.2f\n", amount);
    printf("Tax: %.2f\n", tax);
}

/**
 * computer_tax - Calculates the tax for a given income amount
 * @amount: The income amount to compute the tax on.
 *
 * Return: The computed tax as a float value.
 */
float compute_tax(float amount)
{
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

    return tax;
}
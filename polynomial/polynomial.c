// formular: 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6

// Author: N Aimable
// Purpose: computes the value of the polynomial function
// Date: 6/08/2025

#include <stdio.h>


int calculate_polynomial(int x);
int calc_pow(int a, int b);

int calculate_polynomial(int x)
{
    // formular: 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6
    return 3 * calc_pow(x, 5) + 2 * calc_pow(x, 4) - 5 * calc_pow(x, 3) - calc_pow(x, 2) + 7 * x - 6;
}

int calc_pow(int a, int b)
{
    // This formular returns the result of a raised to the pow of b

    if (b == 0)
    {
        return 1;
    }

    int result = a;
    for (int i = 1; i < b; i++)
    {
        result *= a;
    }

    return result;
}

int main(void)
{
    // x needs to be an int .. in our case
    int x;

    printf("Enter X: ");
    scanf("%d", &x);

    int polynomial_value = calculate_polynomial(x);
    printf("%d\n", polynomial_value);

    return 0;
}
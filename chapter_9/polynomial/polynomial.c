#include <stdio.h>

/* function protos */
int pow_func(int x, int y);
int polynomial_func(int x);

int main(void)
{
    int x = 2;
    printf("result: %d\n", polynomial_func(x));

    return 0;
}

/**
 * pow_func - computes the value of x raised to the power of y
 * @x: The base number.
 * @y: The exponent (power) to raise x to.
 *
 * note: doesn't handle negative exponents.
 *
 * Return: The result of x raised to the power y.
 */
int pow_func(int x, int y)
{
    if (y == 0)
        return 1;

    return x * (pow_func(x, --y));
}

/**
 * polynomial_func - computes value of a polynomial function
 * @x: x
 *
 * Return: The value of the polynomial function
 */
int polynomial_func(int x)
{
    return (3 * pow_func(x, 5)) + (2 * pow_func(x, 4)) - (5 * pow_func(x, 3)) - pow_func(x, 2) + (7 * x) - 6;
}

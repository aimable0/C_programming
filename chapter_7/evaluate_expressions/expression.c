/* A program that evaluates expressions */

#include <stdio.h>

int main(void)
{
    // Assumption 1: Operands are floating-point numbers.
    // Assumption 2: Operators allowed are + - * /
    // Assumption 3: No operator takes precedence over any other operator.

    float f1 = 0.0f;
    float f2 = 0.0f;
    float expression_value = 0.0f;
    char sign;

    printf("Enter an expression: ");
    scanf("%f", &f1);
    expression_value = f1;

    while((sign = getchar()) != '\n') {
        scanf("%f", &f2);
        if (sign == '+') {
            expression_value += f2;
        } else if (sign == '-') {
            expression_value -= f2;
        } else if (sign == '*') {
            expression_value *= f2;
        } else if (sign == '/') {
            expression_value /= f2;
        }
    }
    printf("Value of expression: %.2f\n", expression_value);
    return 0;
}
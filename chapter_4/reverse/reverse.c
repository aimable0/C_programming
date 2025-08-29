// Author: N Aimable
// Purpose: receives a two-digit num and reverses it

#include <stdio.h>


int main(void)
{
    // reversing the input provided by the user

    // easiest way around :)
    // int a, b;
    // printf("Enter a two-digit number: ");
    // scanf("%1d%1d", &a, &b);
    // printf("The reversal is: %d%d\n", b, a);


    // a more sophisticated approach
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int last_digit = num % 10;
    int first_digit = (num - last_digit) / 10;
    printf("The reversal is: %d%d\n", last_digit, first_digit);


    // Let's handle three digits
    int num2;
    printf("Enter a three-digit number: ");
    scanf("%d", &num2);

    last_digit = num2 % 10;
    int middle_digit = ((num2 - last_digit) % 100) / 10;
    first_digit = (num2 - ((num2 - last_digit) % 100)) / 100;

    printf("The reversal is: %d%d%d\n", last_digit, middle_digit, first_digit);


    // without using arthimetic
    int d1, d2, d3;   // to hold the digits
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is: %d%d%d\n", d3, d2 ,d1);

    return 0;
}
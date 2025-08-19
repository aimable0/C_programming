// Author: N Aimable
// Purpose: The program finds the largest in a series of numbers enter by the user.
// Date: 20 08 2025

#include <stdio.h>

int main(void)
{
    // program prompts user to enter one by one.
    // stops receiving input from user when user types 0

    float num;   // be informed. that none initialized variables are assigned rubbish numbers
                            // (that can interfere with the working of your program without you noticing)
    float largest = 0.0f;
    while (num != 0)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (largest < num)
            largest = num;
    }
    printf("The Largest number entered was %.2f\n", largest);
    return 0;
}
#include <stdio.h>


int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float tax = amount * (5.0f / 100.0f);
    // worth noting: I first tried 5/100 and I was getting un expected result becuase of truncation.
    // so I was getting zero. instead of 0.05 .. and then decided to make them floats
    // printf("%.2f", tax);
    amount += tax;

    printf("With tax added: $%.2f\n", amount);
}
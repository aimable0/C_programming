// Author: N Aimable
// Purpose: Calculates the remaining balance on a loan after 3 consecutive payments
// Date: 06/08/2025

#include <stdio.h>


int main(void)
{
    float capital = 20000.00f;
    float interest_rate = 6.0f;
    float monthly_payment = 386.66f;

    float monthly_interest_rate = (6.0f / 100.0f) / 12.00;
    printf("%.3f\n", monthly_interest_rate);

    float interest_amount = (monthly_interest_rate * capital);
    printf("%.2f\n", interest_amount);

    float balance = capital;

    // 1st Payment
    balance -= (monthly_payment - interest_amount);
    printf("Balance remaining after first payment: $%.2f\n", balance);

    // 2nd Payment
    interest_amount = monthly_interest_rate * balance;
    balance -= (monthly_payment - interest_amount);
    printf("Balance remaining after second paymant: $%.2f\n", balance);

    // 3rd Payment
    interest_amount = monthly_interest_rate * balance;
    balance -= (monthly_payment - interest_amount);
    printf("Balance remaining after third payment: $%.2f\n", balance);


    return 0;
}
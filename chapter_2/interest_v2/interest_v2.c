// Author: N Aimable
// Purpose: Calculates the remaining balance on a loan after 3 consecutive payments
// Date: 06/08/2025
// Modified: 20 Aug, 2025 - to also asks the user to enter the number of payments and then displays the
// balance remaining after each of these payments.

#include <stdio.h>


int main(void)
{
    float capital;
    float interest_rate;
    float monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &capital);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);


    // modification
    int number_of_pamyments;
    printf("Enter number of payments: ");
    scanf("%d", &number_of_pamyments);


    float monthly_interest_rate = (6.0f / 100.0f) / 12.00;
    float balance = capital;
    float interest_amount;


    // Old way of calculating balance (for 3 consecutive months).
    // 1st Payment
    // interest_amount = (monthly_interest_rate * capital);
    // balance -= (monthly_payment - interest_amount);
    // printf("Balance remaining after first payment: $%.2f\n", balance);

    // // 2nd Payment
    // interest_amount = monthly_interest_rate * balance;
    // balance -= (monthly_payment - interest_amount);
    // printf("Balance remaining after second paymant: $%.2f\n", balance);

    // // 3rd Payment
    // interest_amount = monthly_interest_rate * balance;
    // balance -= (monthly_payment - interest_amount);
    // printf("Balance remaining after third payment: $%.2f\n", balance);


    // modifed way of calculating balance for n times of payment.
    for (int i = 0; i < number_of_pamyments; i++) {
        if (i == 0) {
            interest_amount = (monthly_interest_rate * capital);
        }
        else {
            interest_amount = monthly_interest_rate * balance;
        }
        balance -= (monthly_payment - interest_amount);
        printf("Balance remaining after first payment: $%.2f\n", balance);
    }

    return 0;
}
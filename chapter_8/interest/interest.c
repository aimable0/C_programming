/* A program that compounds interest monthly instead of annually */
// works but not the best appraoch

#include <stdio.h>
#define CAPITAL 100

int main(void)
{
    float amount_with_interest;
    float capital = 100.00;
    int years;
    int rate;

    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter a number of years: ");
    scanf("%d", &years);

    // Let's do it for the constant rate
    float amounts[years];

    printf("Years\t");
    for (int i = 1, cpy_rate = rate; i <= years; i++, cpy_rate++) {
        printf("  %d%%\t", cpy_rate);
    }
    printf("\n");

    for (int m = 1; m < years + 1; m++){
        printf("  %d\t", m);
        if (m == 1) {
            for (int i = 0; i < years; i++) {

                amount_with_interest = capital + (capital * ((rate + i) / 100.00));
                amounts[i] = amount_with_interest;
                printf("%.2f\t",amount_with_interest);
            }
        } else {
            for (int i = 0; i < years; i++) {
                amount_with_interest = amounts[i] + (amounts[i] * ((rate + i) / 100.00));
                amounts[i] = amount_with_interest;
                printf("%.2f\t",amount_with_interest);
            }
        }
        printf("\n");
    }

    return 0;
}
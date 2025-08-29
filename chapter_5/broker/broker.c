#include <stdio.h>
int main(void)
{
    int shares;
    printf("Enter number of shares: ");
    scanf("%d", &shares);

    float price_per_share;
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);


    // dealing with shares using the rival broker
    float rival_commission;
    if (shares < 2000)
        rival_commission = 33.00f + (0.03 * shares);
    else if (shares >= 2000)
        rival_commission = 33.00f + (0.02 * shares);

    printf("Commission by rival broker: $%.2f\n", rival_commission);


    // original broker
    float commission;
    float value;
    value = shares * price_per_share;
    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission by original broker: $%.2f\n", commission);
    return 0;
}
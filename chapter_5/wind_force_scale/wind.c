// Author: N Aimable
// Purpose: Displays wind force description given user input in knots
//         -Using the simplified version of the Beaufort scale,
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{

    int wind_speed = 1;

    printf("Enter Wind Speed (in knots): ");
    scanf("%d", &wind_speed);

    if (wind_speed > 63)
        printf("Hurricane\n");
    else if (wind_speed > 47)
        printf("Storm\n");
    else if (wind_speed > 27)
        printf("Gale\n");
    else if (wind_speed > 3)
        printf("Breeze\n");
    else if (wind_speed > 0)
        printf("Light air\n");
    else
        printf("Calm\n");
}
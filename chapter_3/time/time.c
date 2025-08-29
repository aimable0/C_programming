// Author: N Aimable
// Purpose: changes time from 24h t 12h format

#include <stdio.h>

int main(void)
{
    // This program assumes that the enter format will be a valid 24hour format.
    // i.e it doesn't handle invalid format (&& it may return unexpected info)

    int hour = 0;
    int min = 0;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    if (hour == 12) {
        printf("Equavelent 12-hour time: %.2d:%.2d ", 12, min);
    } else if (hour > 12) {
        printf("Equavelent 12-hour time: %.2d:%.2d ", (hour - 12), min);
    } else {
        printf("Equavelent 12-hour time: %.2d:%.2d ", hour, min);
    }

    // The other simplest
    printf("%s\n", hour >= 12 ? "PM" : "AM");

    // adding the PM or AM on display. (simplified if version)
    // if (hour >= 12)
    //     printf("PM\n");
    // else
    //     printf("AM\n");

    // The most simplified (using ternary)
    // (hour >= 12 && hour < 24) ? printf("PM\n") : printf("AM\n");

    // adding the PM or AM on display using switch (this could be the longer version).
    // switch (hour) {
    //     case 12: case 13: case 14:
    //     case 15: case 16: case 17:
    //     case 18: case 19: case 20:
    //     case 21: case 22: case 23: printf("PM\n"); break;
    //     default: printf("AM\n");
    // }

    return 0;
}
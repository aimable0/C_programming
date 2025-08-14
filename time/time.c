// Author: N Aimable
// Purpose: changes time from 24h t 12h format

#include <stdio.h>

int main(void)
{
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

    // adding the PM or AM on display.
    switch (hour) {
        case 12: case 13: case 14:
        case 15: case 16: case 17:
        case 18: case 19: case 20:
        case 21: case 22: case 23: printf("PM\n"); break;
        default: printf("AM\n");
    }

    return 0;
}
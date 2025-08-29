// Author: N Aimable
// Purpose: Calendar


#include <stdio.h>

int main(void)
{
    printf("Enter number of days in month: ");
    int month_days;
    scanf("%d", &month_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    int starting_day;
    scanf("%d", &starting_day);

    printf("\n--------- CALENDAR ---------\n");

    // trying to get month.
    // char c;
    // printf("   Month: ");
    // while (c != '.') {
    //     if ( c == '.'){
    //         break;
    //     }

    //     scanf("%c", &c);
    //     printf("%c", c);
    // }
    // printf("\n");

    // printing Month calendar
    printf("   S   M   T   W   T   F   S\n");

    // Version 1
    // for (int i = 1, day = 2 - starting_day; i <= month_days + (starting_day - 1); i++, day++) {

    //     if (i < starting_day) {
    //         printf("    ");
    //     }
    //     else {
    //         printf("%4d", day);
    //     }

    //     if (i % 7 == 0) {
    //         printf("\n");
    //     }
    // }


    // version 2
    for (int i = 1; i < month_days + starting_day; i++) {
        if (i < starting_day) {
            printf("    ");
        } else {
            printf("%4d", i - (starting_day - 1));
        }

        if (i % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n------------ END -----------\n\n");

    return 0;
}
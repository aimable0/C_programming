#include <stdio.h>

int main(void)
{
    // Note: This program assumes year starts from 00 (2000) - to continue
    // dates like 98 vs 01 would give you something unexpected (for now :)..
    // for better result write '1998' instead of '98' vs 2001 instead of '01'
    // Modified: 20 Aug, 2025 -- to accept more that two dates.
    // Later I will try to optimize it
    // and handle similar dates .. gracefully.

    // year, month, day
    int y1, m1, d1;
    int y2, m2, d2;
    int early_y, early_m, early_d;

    while(1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m1, &d1, &y1);
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m2, &d2, &y2);

        if ((y1 == 0 && m1 == 0 && d1 == 0) || (y2 == 0 && m2 == 0 && d2 == 0)) {
            break;
        }

        // Let's analyze and see what comes first.
        if (y1 > y2)
        {
            // printf("Date 2 comes before Date 1\n");
            early_y = y2;
            early_d = d2;
            early_m = m2;
        }
        else if (y1 < y2)
        {
            // printf("Date 1 comes before Date 2\n");
            early_y = y1;
            early_d = d1;
            early_m = m1;
        }
        else if (m1 < m2)
        {
            // printf("Date 1 comes before Date2");
            early_y = y1;
            early_d = d1;
            early_m = m1;
        }
        else if (m2 < m1)
        {
            // printf("Date 2 Comes before Date 1");
            early_y = y2;
            early_d = d2;
            early_m = m2;
        }
        else if (d1 < d2)
        {
            // printf("Date 1 comes before Date 2");
            early_y = y1;
            early_m = m1;
            early_d = d1;
        }
        else if (d2 < d1)
        {
            // printf("Date 2 comes before Date 1");
            early_d = d2;
            early_y = y2;
            early_m = m2;
        }
        // else
        // {
        //     printf("Both Dates are the same");
        // }
        // printf("\n");
    }



    printf("%d/%d/%.2d is the earliest date\n", early_m, early_d, early_y);

    return 0;
}

/* Program prompts the user to enter two dates and then indicates which date comes earlier on the the calendar */

#include <stdio.h>

int main(void)
{
    // Note: This program assumes year starts from 00 (2000) - to continue
    // dates like 98 vs 01 would give you something unexpected (for now :)..
    // for better result write '1998' instead of '98' vs 2001 instead of '01'

    // year, month, day
    int y1, m1, d1;
    int y2, m2, d2;

    printf("Enter First date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter Second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    // Let's analyze and see what comes first
    // years
    if (y1 > y2)
    {
        printf("Date 2 comes before Date 1\n");
    }
    else if (y1 < y2)
    {
        printf("Date 1 comes before Date 2\n");
    }
    else if (m1 < m2)
    {
        printf("Date 1 comes before Date2");
    }
    else if (m2 < m1)
    {
        printf("Date 2 Comes before Date 1");
    }
    else if (d1 < d2)
    {
        printf("Date 1 comes before Date 2");
    }
    else if (d2 < d1)
    {
        printf("Date 2 comes before Date 1");
    }
    else
    {
        printf("Both Dates are the same");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int day_of_year(int, int, int);
bool isLeapYear(int);

int main(void)
{
    // test
    int daynum = day_of_year(3, 15, 2025);
    printf("day number %d.\n", daynum);

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int days = 0;
    switch (month - 1)
    {
        case 12: days += 31;
        case 11: days += 30;
        case 10: days += 31;
        case 9:  days += 30;
        case 8:  days += 31;
        case 7:  days += 31;
        case 6:  days += 30;
        case 5:  days += 31;
        case 4:  days += 30;
        case 3:  days += 31;
        case 2:  days += (isLeapYear(year)) ? 29 : 28;
        case 1:  days += 31; break;
    }

    return days + day;
}

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) ? true : false;
}
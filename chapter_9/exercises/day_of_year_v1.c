#include <stdio.h>
#include <stdbool.h>

int day_of_year(int, int, int);
bool isLeapYear(int);

int main(void)
{
    int daynum = day_of_year(3, 15, 2025);
    printf("day number %d.\n", daynum);

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int days = 0;

    if (month == 1)
        return day;
    else
        days += 31;
    if (month == 2)
        return days + day;
    else
        days += (isLeapYear(year)) ? 29 : 28;
    if (month == 3)
        return days + day;
    else
        days += 31;
    if (month == 4)
        return days + day;
    else
        days += 30;
    if (month == 5)
        return days + day;
    else
        days += 31;
    if (month == 6)
        return days + day;
    else
        days += 30;
    if (month == 7)
        return days + day;
    else
        days += 31;
    if (month == 8)
        return days + day;
    else
        days += 31;
    if (month == 9)
        return days + day;
    else
        days += 30;
    if (month == 10)
        return days + day;
    else
        days += 31;
    if (month == 11)
        return days + day;
    else
        days += 30;

    return days + day;
}

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) ? true : false;
}
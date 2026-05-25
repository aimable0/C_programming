#include <stdio.h>
#define MAX_LEN 15

int main(void)
{
    char user_input[MAX_LEN];
    char *months[] = {
        "",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};

    printf("Enter a date: (mm/dd/yyyy): ");
    int mm, dd, yy;
    scanf(" %d/%d/%d", &mm, &dd, &yy);
    printf("You entered the date %s %d, %d\n", months[mm], dd, yy);

    return 0;
}
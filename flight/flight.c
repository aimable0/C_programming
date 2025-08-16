// Author : N Aimable
// Purpose:
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{
    int hr, min;   // this will store users time
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    // WE will need to convert it into 12hr time.. (later)
    // minutes from midnight
    int tot_min = (60 * hr) + min;  // total minutes from midnight (00:00).


    // I am thinking of creating ranges..
    // flights departure in minutes from midnight

    // if (tot_min <= (8 * 60))

}
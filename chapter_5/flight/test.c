#include <stdio.h>

int main(void)
{
    int departure_2 = (21 * 60) + 45;
    int arrival_2 = (23 * 60) + 58;

    // try and display time again
    int departr_hr = departure_2 / 60;
    int departr_min = departure_2 % 60;

    // time in 12hr time.
    if (departr_hr > 12) {
        printf("time %d:%d p.m.\n", departr_hr - 12, departr_min);
    } else {
        printf("time %d:%d a.m.\n", departr_hr, departr_min);
    }
}
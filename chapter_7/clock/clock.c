/* A program that asks the user for a 12hr time, then displays the time in 24 hr*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hr, min;
    char time_label;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hr, &min, &time_label);

    if (toupper(time_label) == 'A') {
        printf("Equivalent: %.2d:%.2d\n", hr, min);
    } else {
        printf("Equivalent: %.2d:%.2d\n", (hr == 12) ? 12 : (hr + 12), min);
    }

    return 0;
}
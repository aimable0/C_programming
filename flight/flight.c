// Author : N Aimable
// Purpose:
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{
    int departure_1 = (8 * 60);
    int arrival_1 = (10 * 60) + 16;

    int departure_2 = (9 * 60) + 43;
    int arrival_2 = (11 * 60) + 52;

    int departure_3 = (11 * 60) + 19;
    int arrival_3 = (13 * 60) + 31;

    int departure_4 = (12 * 60) + 47;
    int arrival_4 = (15 * 60);

    int departure_5 = (14 * 60);
    int arrival_5 = (16 * 60) + 8;

    int departure_6 = (15 * 60) + 45;
    int arrival_6 = (17 * 60) + 55;

    int departure_7 = (19 * 60);
    int arrival_7 = (21 * 60) + 20;

    int departure_8 = (21 * 60) + 45;
    int arrival_8 = (23 * 60) + 58;

    int hr, min; // users' time.

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    int time = (hr * 60) + min;

    if (departure_1 >= time || (time - departure_1) < (departure_2 - time)) {
        printf("Closest departure is departure_1\n");
    } else if (departure_2 >= time || (time - departure_2) < (departure_3 - time)) {
        printf("Closest departure is departue_2\n");
    } else if (departure_3 >= time || (time - departure_3) < (departure_4 - time)) {
        printf("Closest departure is departue_3\n");
    } else if (departure_4 >= time || (time - departure_4) < (departure_5 - time)) {
        printf("Closest departure is departue_4\n");
    } else if (departure_5 >= time || (time - departure_5) < (departure_6 - time)) {
        printf("Closest departure is departue_5\n");
    } else if (departure_6 >= time || (time - departure_6) < (departure_7 - time)) {
        printf("Closest departure is departue_6\n");
    } else if (departure_7 >= time || (time - departure_7) < (departure_8 - time)) {
        printf("Closest departure is departue_7\n");
    } else {
        printf("Closest departure is departue_8\n");
    }

    return 0;
}
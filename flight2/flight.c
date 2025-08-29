// Author : N Aimable
// Purpose: Program that displays the flight with the closest departure to the provided time.
// Date: 15/08/2025

// Modified: to accept 12-hr format.

#include <stdio.h>
#include <ctype.h>

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

    // modification - get 12-hour time..
    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hr, &min);

    char time_indicator;
    scanf(" %c", &time_indicator); // skips spaces if any and stores a char


    int time;
    // convert the user's time back to 24hr for easy comparison.
    if (toupper(time_indicator) == 'A') {
        time = (hr * 60) + min;
    } else {
        time = (hr + 12) * 60 + min;
    }

    if (departure_1 >= time || (time - departure_1) < (departure_2 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_1 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_1 / 60) - 12, (departure_1 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_1 / 60), (departure_1 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_1 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_1 / 60) - 12, (arrival_1 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_1 / 60), (arrival_1 % 60));
        }
    } else if (departure_2 >= time || (time - departure_2) < (departure_3 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_2 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_2 / 60) - 12, (departure_2 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_2 / 60), (departure_2 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_2 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_2 / 60) - 12, (arrival_2 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_2 / 60), (arrival_2 % 60));
        }
    } else if (departure_3 >= time || (time - departure_3) < (departure_4 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_3 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_3 / 60) - 12, (departure_3 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_3 / 60), (departure_3 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_3 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_3 / 60) - 12, (arrival_3 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_3 / 60), (arrival_3 % 60));
        }
    } else if (departure_4 >= time || (time - departure_4) < (departure_5 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_4 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_4 / 60) - 12, (departure_4 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_4 / 60), (departure_4 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_4 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_4 / 60) - 12, (arrival_4 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_4 / 60), (arrival_4 % 60));
        }
    } else if (departure_5 >= time || (time - departure_5) < (departure_6 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_5 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_5 / 60) - 12, (departure_5 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_5 / 60), (departure_5 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_5 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_5 / 60) - 12, (arrival_5 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_5 / 60), (arrival_5 % 60));
        }
    } else if (departure_6 >= time || (time - departure_6) < (departure_7 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_6 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_6 / 60) - 12, (departure_6 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_6 / 60), (departure_6 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_6 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_6 / 60) - 12, (arrival_6 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_6 / 60), (arrival_6 % 60));
        }
    } else if (departure_7 >= time || (time - departure_7) < (departure_8 - time)) {
        // Displaying Departure in 12-hr format
        if (departure_7 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_7 / 60) - 12, (departure_7 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_7 / 60), (departure_7 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_7 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_7 / 60) - 12, (arrival_7 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_7 / 60), (arrival_7 % 60));
        }
    } else {
        // Displaying Departure in 12-hr format
        if (departure_8 / 60 > 12) {
            printf("Closest departure time is %d:%.2d p.m., ", (departure_8 / 60) - 12, (departure_8 % 60));
        } else {
            printf("Closest departure time is %d:%.2d a.m., ", (departure_8 / 60), (departure_8 % 60));
        }
        // Displaying Arrival in 12-hr format
        if (arrival_8 / 60 > 12) {
            printf("arriving at %d:%.2d p.m.\n",(arrival_8 / 60) - 12, (arrival_8 % 60));
        } else {
            printf("arriving at %d:%.2d a.m.\n",(arrival_8 / 60), (arrival_8 % 60));
        }
    }

    return 0;
}
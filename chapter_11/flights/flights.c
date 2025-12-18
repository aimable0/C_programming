// Author : N Aimable
// Purpose: Prints the closest flight to a given time.
// Date: 15/08/2025
// modified: 18 Dec 2025,
// purpose for modification: to use make it modular (with functions)

#include <stdio.h>

// prototypes.
void find_closest_flight(int time, int *departure_time, int *arrival_time);
void print_departure_arrival(int departure, int arrival);

int main(void)
{
    int hr, min, desired_time; // users' time.
    int departure_time;
    int arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    desired_time = (hr * 60) + min;

    find_closest_flight(desired_time, &departure_time, &arrival_time);
    print_departure_arrival(departure_time, arrival_time);

    return 0;
}


void find_closest_flight(int time, int *departure_time, int *arrival_time) {
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


    if (departure_1 >= time || (time - departure_1) < (departure_2 - time)) {
        *departure_time = departure_1;
        *arrival_time = arrival_1;
    } else if (departure_2 >= time || (time - departure_2) < (departure_3 - time)) {
        *departure_time = departure_2;
        *arrival_time = arrival_2;
    } else if (departure_3 >= time || (time - departure_3) < (departure_4 - time)) {
        *departure_time = departure_3;
        *arrival_time = arrival_3;
    } else if (departure_4 >= time || (time - departure_4) < (departure_5 - time)) {
        *departure_time = departure_4;
        *arrival_time = arrival_4;
    } else if (departure_5 >= time || (time - departure_5) < (departure_6 - time)) {
        *departure_time = departure_5;
        *arrival_time = arrival_5;
    } else if (departure_6 >= time || (time - departure_6) < (departure_7 - time)) {
        *departure_time = departure_6;
        *arrival_time = arrival_6;
    } else if (departure_7 >= time || (time - departure_7) < (departure_8 - time)) {
        *departure_time = departure_6;
        *arrival_time = arrival_6;
    } else {
        *departure_time = departure_8;
        *arrival_time = arrival_8;
    }

}

void print_departure_arrival(int departure, int arrival) {
    if (departure / 60 > 12) {
        printf("Closest departure time is %d:%.2d p.m., ", (departure / 60) - 12, (departure % 60));
    } else {
        printf("Closest departure time is %d:%.2d a.m., ", (departure / 60), (departure % 60));
    }
    if (arrival / 60 > 12) {
        printf("arriving at %d:%.2d p.m.\n",(arrival / 60) - 12, (arrival % 60));
    } else {
        printf("arriving at %d:%.2d a.m.\n",(arrival / 60), (arrival % 60));
    }
}

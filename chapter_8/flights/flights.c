// Author : N Aimable
// Purpose: displays closest flight departure to the provided time
// Date: 15/08/2025
// Modified: on 04/09/2025 to use arrays to store departure and arrivals.

#include <stdio.h>
#define FLIGHTS_TOT 8

int main(void)
{
    int departure_times[FLIGHTS_TOT] = {
        (8 * 60), ((9 * 60) + 43), ((11 * 60) + 19), ((12 * 60) + 47), (14 * 60), ((15 * 60) + 45), (19 * 60), ((21 * 60) + 45)};
    int arrival_times[FLIGHTS_TOT] = {
        ((10 * 60) + 16), ((11 * 60) + 52), ((13 * 60) + 31), (15 * 60), ((16 * 60) + 8), ((17 * 60) + 55), ((21 * 60) + 20), ((23 * 60) + 58)};


    int hr, min; // users' time.
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);
    int time = (hr * 60) + min;

    for (int i = 0; i < FLIGHTS_TOT; i++){
        if (departure_times[i] >= time || (time - departure_times[i]) < (departure_times[i + 1] - time)) {
            // Displaying Departure in 12-hr format
            if (departure_times[i] / 60 > 12) {
                printf("Closest departure time is %d:%.2d p.m., ", (departure_times[i] / 60) - 12, (departure_times[i] % 60));
            } else {
                printf("Closest departure time is %d:%.2d a.m., ", (departure_times[i] / 60), (departure_times[i] % 60));
            }
            // Displaying Arrival in 12-hr format
            if (arrival_times[i] / 60 > 12) {
                printf("arriving at %d:%.2d p.m.\n",(arrival_times[i] / 60) - 12, (arrival_times[i] % 60));
            } else {
                printf("arriving at %d:%.2d a.m.\n",(arrival_times[i] / 60), (arrival_times[i] % 60));
            }
            break;
        }
    }

    return 0;
}
/* a program that creates an array that stores one month of hourly temperature readings */

#include <stdio.h>

int main(void)
{
    int temparature_readings[30][24] = {0};

    // program that would calculate the average temperature
    int sum = 0; //temparature sum
    for (int i = 0; i < 30; i++) {
        for (int m = 0; m < 24; m++) {
            sum += temparature_readings[i][m];
        }
    }

    double average_temparature = (double) sum / (24 * 30);
    return 0;
}
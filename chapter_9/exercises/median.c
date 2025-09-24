#include <stdio.h>
#include <stdbool.h>

double median(double, double, double);

int main(void)
{
    double mdnumber = median(4.00, 3.00, 6.00);
    printf("median: %.2f\n", mdnumber);
}

double median(double x, double y, double z)
{
    double temp = 0;

    if (x > y) {
        temp = y;
        y = x;
        x = temp;
    }

    if (y > z) {
        temp = z;
        z = y;
        y = temp;
    }

    if (x > y) {
        temp = y;
        y = x;
        x = temp;
    }

    return y;
}
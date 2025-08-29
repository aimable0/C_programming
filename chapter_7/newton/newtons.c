/* A program that uses newton's method to compute the square root of a positive floating-point number */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, old_y, new_y;
    double avg = 0;      // avg = old_y / (x / old_y);
    old_y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    avg = (old_y + (x / old_y)) / 2;
    new_y = fabs(avg);

    // breaking condition = absolute value of old_y - new_y < 0.00001
    while(fabs(new_y - old_y) > 0.00001) {
        old_y = fabs(new_y);
        avg = (old_y + (x / old_y)) / 2;
        new_y = fabs(avg);
    }

    // nicely print the square root.
    double frac_part = (new_y - (int) new_y);
    if (fabs(frac_part) > 1e-9) {
        printf("Square root: %f\n", new_y);
    } else {
        printf("Square root: %.0f\n", new_y);
    }
    printf("sample: %f\n", 1e-9);
}
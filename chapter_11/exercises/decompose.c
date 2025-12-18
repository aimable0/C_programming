#include <stdio.h>

void decompose(double num, int *whole_part, double *frac_part);

int main(void)
{
    double num = 3.5;
    int whole = 0;
    double frac_part = 0;
    decompose(num, &whole, &frac_part);
    printf("%d - %.2f\n", whole, frac_part);
}

void decompose(double num, int *whole_part, double *frac_part)
{
    *whole_part = (int)num;
    *frac_part = num - (double)*whole_part;
}

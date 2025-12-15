#include <stdio.h>


void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++) {
        *sum += a[i];
    }
    *avg = *sum / n;
}

int main(void) {

    double a[5] = {1, 2, 3, 4, 5};
    double sum = 0;
    double avg = 0;
    avg_sum(a, 5, &avg, &sum);
    printf("avg: %.2f\n", avg);
    printf("sum: %.2f\n", sum);
}

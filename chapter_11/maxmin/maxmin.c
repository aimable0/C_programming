/* A program that identifies the max and min in an array of numbers*/
#include <stdio.h>

void max_min(int a[], int n, int *max, int *min);
int main(void) {
    int big;
    int small;

    int a[] = {1, -1, 3, 10, 21, 13, 1, 4};
    max_min(a, 8, &big, &small);
    printf("big: %d\n", big);
    printf("small: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min) {
    *min = a[0];
    *max = a[n - 1];

    for (int i = 1; i < n; i++) {
        if (*min > a[i]) *min = a[i];
        if (*max < a[i]) *max = a[i];
    }
}

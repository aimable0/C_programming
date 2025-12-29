#include <stdio.h>

int *find_middle(int a[], int n);
int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    printf("%s\n", *find_middle(a, 5) == 3 ? "true": "false");
}

int *find_middle(int a[], int n) {
    return a + n / 2; // version 1
    // return &a[n/2]; // version 2
}
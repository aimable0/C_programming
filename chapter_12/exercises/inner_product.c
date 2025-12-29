#include <stdio.h>

// Exercise:
// double inner_product(const double *a, const double *b, int n);
// The function should return a[0] * b[0] + a[1]* b[1] + … + a[n-1] * b[n-1].
// Using pointer arithmetic not subscripting to visit array elements.

double inner_product(const double *a, const double *b, int n);

int main(void) {

    double a[] = {1.0, 2.0, 3.0};
    double b[] = {4.0, 5.0, 6.0};

    double product = inner_product(a, b, 3);  // expected: 1*4 + 2*5 + 3*6 = 32.0
    printf("product: %.2f\n", product);

    return 0;
}


double inner_product(const double *a, const double *b, int n) {
    double *ptr_a = a, *ptr_b = b;
    double product = 0.0;

    while(ptr_a < a + n) {
        product += *ptr_a++ * *ptr_b++;
    }
    return product;
}

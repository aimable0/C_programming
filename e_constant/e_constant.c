#include <stdio.h>


int main(void)
{
    // formular: e = 1 + 1/1! + 1/2! + 1/3!
    // n! (n factorial) = n \times (n-1) x (n-2) x ... x 1

    float factorial;
    float e = 1.0f;
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int m = i; m > 0; m--) {
            if (m == i) {
                factorial = m;
            } else {
                factorial *= m;
            }
        }
        e += (1.0 / factorial); //!\doing something like (1 / factorial) would result into unwanted behaviour; ex 1/2 = 0 instead of 0.5
    }
    printf("if n is %d, e is approximately: %f\n", n, e);
    return 0;

    // possible issues with my code:
    //!\ 15! => wi ll resutl into a number too big to fit in a float (a double will fix that)

}
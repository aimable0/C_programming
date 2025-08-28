/* A program that computes the factorial of a positive integer */

#include <stdio.h>
#include <math.h>

int main(void)
{
    // using a short /float.
    // short n = 1;
    // float factorial = 1;

    // printf("Enter a positive integer: ");
    // scanf("%hd", &n);

    // while(n > 0){
    //     factorial *= n;
    //     n--;
    // }
    // printf("Factorial: %.0f\n", factorial);

    // Challenge: What's the largest value of n for which the program correctly prints the factorial of n?

    // Let's experiment first with a short

    // less elegant version
    // printf("Experimenting to check where n factorial becomes messy\n");
    // int i = 1;
    // while(1) {
    //     while(n > 0){
    //         if (factorial < 0) {
    //             goto end;
    //         }
    //         factorial *= n;
    //         n--;
    //     }

    //     printf("N: %hd  -  factorial: %hd\n", i, factorial);
    //     factorial = 1;

    //     n = ++i;
    // }
    // end:;

    // more elegant version.
    // while(factorial > 0) {
    //     printf("N: %hd  -  factorial: %hd\n", n++, factorial);
    //     factorial *= n;
    // }

    // largest value of n using an int
    // int n = 1;
    // int factorial = 1;

    // while(factorial > 0) {
    //     printf("N: %2d  -  factorial: %d\n", n++, factorial);
    //     factorial *= n;
    // }

    // largest value of n using a long
    // int n = 1;
    // long factorial = 1;

    // while(factorial > 0) {
    //     factorial *= n;
    //     printf("N: %2d  -  factorial: %ld\n", n++, factorial);
    // }

    // long long
    // int n = 1;
    // long long factorial = 1;

    // while(factorial > 0) {
    //     factorial *= n;
    //     printf("N: %2d  -  factorial: %lld\n", n++, factorial);
    // }

    // try with a float

    // int n = 1;
    // float factorial = 1.0f;
    // printf("floatsize: %zu\n", sizeof(float));

    // // WE COULD ALSO do something like this while (!isinf(factorial))in
    // while(factorial <= __FLT_MAX__) {
    //     factorial *= (float) n;
    //     printf("N: %2d  -  factorial: %.0f\n", n++, factorial);
    // }

    // using a double
    // int n = 1;
    // double factorial = 1.0f;
    // printf("floatsize: %zu\n", sizeof(float));

    // // WE COULD ALSO do something like this while (!isinf(factorial))in
    // while(!isinf(factorial)) {
    //     factorial *= (float) n;
    //     printf("N: %2d  -  factorial: %.0f\n", n++, factorial);
    // }

    // try using a lng double
    int n = 1;
    long double factorial = 1.0f;
    printf("floatsize: %zu\n", sizeof(float));

    // WE COULD ALSO do something like this while (!isinf(factorial))in
    while (!isinf(factorial))
    {
        factorial *= (float)n;
        printf("N: %2d  -  factorial: %.0Lf\n", n++, factorial); // kinda same as double..
    }

    return 0;
}
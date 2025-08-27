// Author: N Aimable
// Purpose: program prints a table of squares

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    //     printf("%10d%10d\n", i, i * i);

    // challenge: try to run the program and determine the smallest value of n that causes this program to fail (by printing strange answers);
    i = 1;
    while (i * i > 0) {
        ++i;
    }
    printf("i on which i * i become less than or equal to zero: %d\n", i); // got i = 46340, the number became negative.

    // verify

    printf("The number before: square of %d is %d\n", (i -1 ), (i - 1) * (i - 1)); // this should give me a negative number.
    printf("The actual number: square of %d is %d\n", i, (i * i));

    // using short to run the program and determine the smallest value of n that causes this program to fail (by printing strange answers);
    short x = 5;
    while ((short) (x * x) > 0) {
        ++x;
    }
    printf("x on which x * x is <= 0 is %hd\n", x);

    // verify
    printf("the number before: square of %hd is %hd\n", (x - 1), (x - 1) * (x - 1)); // this should give me a negative number.
    printf("the actuall number: square of %hd is %hd\n", x, (x * x)); // this should give me a negative number.


    unsigned short y = 65535u; //making y store something greater than this would results (provided_large_num + 1) - unsigned_short_int_max. but this is probably implementation defined..
    printf("y: %hu\n", y); //!\ using something like %hd here on short unsigned int would result into un expected number



    // try using a long int
    long l = 5;
    while (l * l > 0) {
        ++l;
    }
    printf("l on which l * l is <= 0 is %ld\n", l);



    return 0;
}
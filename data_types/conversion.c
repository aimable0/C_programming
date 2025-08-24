#include <stdio.h>
#include <wchar.h>

int main(void)
{
    // concept: Type conversion.
    // conmputer's when performing arhmetics demand that the operands be of the same size (bits) and stored in the store.
    // C however allows for the mixing of types ex 16-bits short can be added to 32-bits int or even 32-bit floating-point

    printf("sizeof char: %lu\n", sizeof('s')); // have 4bytes but may be 2bytes on 16-bit
    short p;
    printf("sizeof short: %lu\n", sizeof(p)); // short's have 2bytes.

    unsigned int m;
    long int n;
    printf("sizeof unsigned int: %lu\n", sizeof(m)); // have 4 bytes
    printf("sizeof long int: %lu\n", sizeof(n));     // have 8 bytes.


    // when a signed operand is combined to unsigned operand.. the signed is converted to signed.
    // Let's have an example..

    int i = -10;
    unsigned int u = 10;
    printf("%d\n", i);
    printf("%u\n", u);

    // let's try to compare them
    // if (i < u) {
    //     printf("i < u = true\n");
    //     printf("%u vs %u\n", i, u);
    // } else {
    //     printf("%u vs %u\n", i, u);
    //     printf("i < u = false\n");
    // }

    // NOTE: suprisingly something happens in the type conversion that makes i greater than u
    // here's what happens: in attempting to convert signed to unsigned
    // 1. since unsigned can't have value of -1 .. then i will be not be -10.. but the largest possible value of unsigned will be added to the number -10
    // resulting into something around 4B+ - 10 .. hence i < u => false


    // CONVERSION DURING ASSIGNMENT.
    int s = 1;
    float f = 12.5;

    // f = s; //here int value is converted to float
    // s = f; // here float value is converted to int
    printf("%d\n", s);
    printf("%d\n", s);

    // int num = 23.1; // 23.1 will be converted into an int .. losing the fraction part.


    char c;
    c = 1000; // this value is usually out of the range of characters. . so one should expecte a meaningless value
    printf("c: %c\n", c);
    printf("c: %d\n", c);

    i = 1.0e20; /*** wrong ***/
    printf("%d\n", i); // meangless data  i is made 1.
    printf("%f\n", i); // i is made 0.0000

    f = 1.0e100;  /*** wrong ***/
    printf("%f\n", f); // results into 'inf'



    f = 3.14159f; // adding the f suffix is great since by default floating-point constants have type 'double'. which could raise errors when assigned to float variables.
    printf("%f\n", f);


    // TYPE DEFINITONS
    typedef int Bool;
    Bool true = 1;

    if (true)
    {
        printf("|hello there..\n");
    }



    short int short_i = 100000;
    printf("short: %d\n", short_i);
    printf("got here!\n");


    // C LIBRARY USES typedef TO CREATE NAMES FOR TYPES THAT CAN VARY FROM ONE C IMPLEMENTATION TO ANOTHER.
    // THESE types often have names that end with _t such as size_t

    // ex:
    // wchar_t is for an int. //!\ its important to include the specific c library's header that declares it.
    wchar_t sample = 5;
    printf("%d\n", sample);


    return 0;

}
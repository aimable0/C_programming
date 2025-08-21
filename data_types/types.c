/* Learning about C's data types */

#include <stdio.h>


int main(void)
{
    // INTEGER DATA TYPE.

    int m;
    long int long_m; // this can also be written as long long_m;
    short int short_m;  // this could be written as short short_m;
    long long int long_long_m; // NEW IN C99

    // Results here are for 32-bit int (which is common nowadays)
    printf("normal - m size: %lu bytes\n", sizeof(m));      // expected: 4 (bytes) -- (this can store a value up to 2b(signed) or 4b (unsigned))
    printf("long - m size: %lu bytes\n", sizeof(long_m));   // expected: 8 (bytes useful when we need to store larger numbers. + we may even make them unsigned to get more space..
    printf("short - m size: %lu bytes\n", sizeof(short_m)); // expected: 2 (bytes) -- useful when we need to conserver memory .. (stores upt to -/+32k  or 65k (unsigned))
    printf("long long - m size: %lu bytes\n", sizeof(long_long_m)); // got 8bytes .. it's atleast 64 bits wide.

    // Standard signed integer types in c99
        // - short, int, long int and (plus char type)
    // Standard unsigned integer types in c99
        // - unsigned short, unsigned int, unsigned long int (plus unsigned char type, and _Bool type)

    // Note: that the 'char' is also considered a basic integer type along other ints.
    // why: an integer is actually to a computer a discrete value/whole number rather than fractions.
    // so something like 'A' is an integer 65 (in ASCII) - the compiler treats it as a small integer ..
    // that means that char can also be used for arthmetic and comparisons :) !

        // samples:
            printf("%d\n", 'A'); //Expected: 65
            printf("%c\n", 65); // Expected: 'A' (characters have been mapped to certain numbers using the ASCII)
            // a char is exactly one byte (8-bits).
    // so characters are just numbers with ASCII/Unicode meaning.

    // ADDITIONAL INFO.
    // its worth noting that c99 standards allow for implementation-defined extended integer types.. on top of the standards
    // with this the compiler mya provide an integer of 128-bit size..


    // INTEGER CONSTANTS
    
}
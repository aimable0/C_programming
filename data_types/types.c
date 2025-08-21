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
    // What are integer constants: these are numbers that appear in the text of a program ex int m = 5 '5' is a constanst
    // This can be written in decimal _base10 (ex: 5, above), octal _base 8 and hexadecimal _base 16.


    // OCTAL 'notation':
    // what are octal numbers
    // these are numbers written using only 0 - 7(composed of 8 possible digits, from 0 - 7)
    // each position in an octal number represents a power of 8.
    //!\: and all octal numbers when written (in text) in a program must begin with 0. ex: 017 0245 while dec must "not" begin with 0

    // something like this:
    int num = 01; //leading zero means octal.. actually
    printf("num (01) => %d\n", num); // you would expect: 1 .. and yeah you get it

    // and you would do something like this:
    // int num_2 = 08;
    // printf("num_2(08) => %d\n", num_2) // you would expect: 8 but you will actaull get "Error": since '8' is an invalid octal digit"

    // one might also write something like this
    int num_2 = 010; // and get no error
    printf("num_2(010) same as => %d\n", num_2);  // you would expect: 10.. but you get => decimal 8

    //!\ conclusion: whenever an integer constant starts with 0 its considered by C compilers as an octal number.
    // which will be used to calculate is equivalent decimal number if you use something like %d
    // you may also display it as it is using format specifier 'o%' instead of using %d ..
    printf("num_2(010) same as => %o\n", num_2);


    // HEXADECIMAL 'notation':
    //!\: These when written in text of a program must start with 0x..
    // hexadecimal contains digits from 0-9 and letters a/A-f/F which stand for (10 - 15)
    //





    // NOTES: Keep in mind that octal and hexadecimal are nothing more than an alternative way of writing numbers.
    // its also important to remember that irregardless of the notation used to represent numbers they are stored in binary (in THE SAME WAY).
    // We can switch from one notation to another at any time, and
    // even mix them: 10 + 015 + 0x20 has the value 55 (decimal).
    // WORTH NOTING: OCTAL AND HEX ARE MOST CONVENIENT IN LOW-LEVEL PROGRAMS ..

    // CONSTANTS HAVE TYPES.
    // note: constants have types.. ex decimal integer constant is usually an int if large long or even unsigned long int (BY DEFAULT).
    // for hex and octal the compiler. tries making it an int, unsigned int, long int, unsigned long int .. until it finds suitable type..
    // we can FORCE the compiler to treat a constant as a long or unsigned by adding the
    // ex 15L, or 010L or 0xAFL or 15U, 010U 0xAFU (The U and L can also be)






}
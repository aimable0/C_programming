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
    printf("normal - m size: %lu bytes\n", sizeof(m));      // expected: 4 (bytes - 32-bits) -- (this can store a value up to 2b(signed) or 4b (unsigned))
    printf("long - m size: %lu bytes\n", sizeof(long_m));   // expected: 8 (bytes 64-bits) useful when we need to store larger numbers. + we may even make them unsigned to get more space..
    printf("short - m size: %lu bytes\n", sizeof(short_m)); // expected: 2 (bytes - 16-bit) -- useful when we need to conserver memory .. (stores upt to -/+32k or 65k (unsigned))
    printf("long long - m size: %lu bytes\n", sizeof(long_long_m)); // got 8bytes .. it's atleast 64 bits wide. but expected to be larger than long.

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


    //  READING AND WRITNG INTEGERS

    //!\  NOTE: %d means signed integer (d for decimal) and %u means unsigned integer.

    // 	%i means “integer, auto-detect base”.
	// •	If the input starts with 0 → it’s treated as octal.
	// •	If it starts with 0x → it’s treated as hexadecimal.
	// •	Otherwise, it’s decimal.

    // unsigned integers.
    // format specifier: '%u':
    // unsigned int u;
    //  - decimal
        // printf("unsigned decimal: ");
        // scanf("%u", &u);    // reads u in base 10
        // something like scanf("%d", &u) could end up in undefined behaviour which can easily go unnotices since gcc is pretty lenient ..
        // and doesn't spot those type mismatch ..
        // printf("unsigned: %u\n", u);    // writes u in base 10

    //  - octal
        // printf("octal (start with 0): ");
        // scanf("%o", &u);    // reads u in base 8
        // printf("octal: %o\n", u);   // writes u in base 8

    // - hexa
        // printf("hexa (start with 0x): ");
        // scanf("%x", &u);    // reads u in base 16
        // printf("hexa: %x\n", u);    // prints/writes u in base 16

    // short integers.
    // format specifier: 'h' - we use h before d, u, o and x

    // short int s;    // or short s;
    // - decimal
        // printf("enter short int: ");
        // scanf("%hd", &s); // hd means short and signed integer.
        // scanf("%hu", &s); // hu means short and unsigned integer.
        // printf("short: %hd\n", s);

    // - octal
        // printf("enter short int: ");
        // scanf("%ho", &s); // short int in octal representation
        // printf("short: %ho\n", s);

    // - hex
        // printf("enter short int: ");
        // scanf("%hx", &s);
        // printf("short: %hx\n", s);

    // we can use the same logic as above to write:
        // - long int using fspecifier '%l' ex '%ld' --> long signed int .. '%lu' --> long unsigned, 'lx' long hex or 'lo' long octal
        // -IN C99 (only) long long 'll' are used before d, u, o or x. ex --> %lld --> long long signed int %llu --> long long unsigned int.


    // FLOATing types:
    //  - float > single precision floating-point (enought for some stuff like storing temperatures.) - about 6 digits precision
    //  - double > double precision floatin-point (greater precision) - about 15 digits precision
    //  - long double > extended-precision floatin-point (possible ultimate precision)
    // A floating constant must contain a decimal point and/or an exponent; the exponent
    // indicates the power of 10 by which the number is to be scaled. If an exponent is
    // present, it must be preceded by the letter E (or e). An optional + or - sign may
    // appear after the E (or e).
    // ex of floating constants: 57.0 72. 10.e+1 57.1E-1 58.3e1 .56e1 .1

    float float_sample;
    double double_sample;
    long double long_double_sample;
    printf("sizeof float: %lu bytes\n", sizeof(float_sample));  // got 4 bytes
    printf("sizeof double: %lu bytes\n", sizeof(double_sample)); // got 8 bytes
    printf("sizeof long double: %lu bytes\n", sizeof(long_double_sample)); // got 8 bytes
    printf("default (ex: 57.0) storage: %lu\n", sizeof(57.0)); // by default this floating-point constant will be stored as double-precision -> *8bytes
    printf("default (ex: 57.0f) storage: %lu\n", sizeof(57.0f)); // here we have forced the compiler to treat floating-point constant as float *4bytes
    // we can also force to compiler to treat a floating-point as long double by adding L at the end ex: instea of 57.6f/F  we can do this 57.6L
    // so 59.2 is by default double,  59.2f(orF) is treated as float and 59.2l(orL) is (is treated as long double)

    // reading and writing floating-point numbers (by default floating-point constants are double)
    printf("e (using e as specifier): %.e\n", 10.e5);  // output: 1e+06 (using %.e is the same as %.0e => remove the floating-point when printing on display)
    printf("e (using f as specifier): %.f\n", 10.e5);  // output: 1000000
    printf("e (using g as specifier): %.g\n", 10.e5);  // output: 1e+06
    // NOTE: printing (or more technically, 'writing') float is the same as printing double. but reading double requires '%lf' specifier not '%f'

    // reading double (using '%lf')
    // double d;
    // scanf("%lf", &d);
    // printf("double: %f\n", d);  //!\NOTICE: that we don't use %lf to 'write' print a double. in C99 however we may use it as well as %lg %le.

    // reading long double and printing long double.
    // the difference in reading a double and long double is in the use of l/L, lowercase l for lf: double and uppercase L for Lf: long double
    // long double ld;
    // scanf("%Lf", &ld);
    // printf("%Lf", ld); //!\ NOTICE: however that we must use Lf to write the long doulbe using "%Lf" in printf string... using %f would be treating it as a float or double.


    // printing ordinary (signed) integers in octal or hex?
    int o = 010;
    int x = 0x1A;

    // %i: integer auto detect would display them in their euqivalent deciamls.
    printf("octal: %i\n", o);
    printf("hex: %i\n", x);
    printf("-----------\n");

    // %o and %x would probably serve the purpose to print octal and hex in ordinary (signed) way as long as the number is positive.
    // if it's negative you get an unexpectedly large number.
    //!\ there's no direct way to print a negative number in octal or hex.
    printf("octal: %o\n", o);
    printf("hex: %x\n", x);

    printf("-----------\n");

    // printing a neg number
    int neg_o = -010;
    int neg_x = -0x1a;
    printf("octal: -%o\n", -neg_o); // you get a very large octal number 
    printf("octal: %d\n", neg_o); // this gives you -8 which is the equivalent negative decimal.
    printf("hex: -%x\n", -neg_x); // you get a very large hex number 


    // carriage return usage
    printf("Hello");
    printf(" Aimable\rY\n");

    printf("\n");
    return 0;
}
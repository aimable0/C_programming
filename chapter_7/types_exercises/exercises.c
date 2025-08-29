#include <stdio.h>
#include <stdint.h>


int main(void)
{
    char ch = '\xdb';

    printf("char: %c\n", ch);
    printf("int: %d\n", ch);
    printf("sizeof char: %zu\n", sizeof((char)'c'));
    printf("sizeof char: %zu\n", sizeof('c')); // this is different from the above 'c' is character constant but its of type int not char.
    printf("sizeof char (zu): %zu\n", sizeof(char));

    char c = 'c';
    printf("sizeof char (zu): %lu\n", sizeof(c));


    // exercises..
    // 1. Give the decimal value of the each of the following integer constants.

    // a077 =>
    // 0x77
    // 0xABC


    // use typdef to create types named int8, int16, int32..
    // so that they represent 8-bit, 16-bit, 32-bit integers.

    // not portable version that would work on my machine.
    // typedef char Int8;
    // Int8 int_8; // 1byte

    // typedef short Int16;
    // Int16 int_16; // 2bytes

    // typedef int Int32;
    // Int32 int_32; // 4bytes

    // printf("int 8-bit: %zu\n", sizeof int_8);
    // printf("int 16-bit: %zu\n", sizeof int_16);
    // printf("int 32-bit: %zu\n", sizeof int_32);

    // most portable version would be using stdint which provides us fixed-width integer types..
    typedef int8_t Int8; //this will make sure that always the int of this type will be 8-bits
    typedef int16_t Int16;
    typedef int32_t Int32;

    Int8 int_8;
    Int16 int_16;
    Int32 int_32;

    printf("int 8-bit: %zu\n", sizeof int_8);
    printf("int 16-bit: %zu\n", sizeof int_16);
    printf("int 32-bit: %zu\n", sizeof int_32);
}
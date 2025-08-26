#include <stdio.h>

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


}
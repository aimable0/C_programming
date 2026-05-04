#include <stdio.h>

int main(void)
{
    // strings
    // constants (string literalts), string variables.

    printf("Hello world!\n");
    char *msg_one = "Hello world!"; // allocates enough memory to store a char *  not the whole text..
    // thing's that can't be done.
    *msg_one = 'Y'; // this can't be done with char *
    // this causes a bus error.

    char msg_two[] = "Hello world!";
    msg_two[0] = 'Y';


    printf("%s\n", msg_one);
    printf("%s\n", msg_two);

    // more stuff we can do with a strng.
    char first_char = "Hy"[0];
    printf("first char: %c\n", first_char);

    // we could also do something like this..
    char *p = msg_two;
    p[0] = 'J';
    printf("modified: %s\n", msg_two);

    return 0;
}
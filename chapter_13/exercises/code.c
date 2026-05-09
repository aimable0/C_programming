/* Exploring Strings in C */
#include <stdio.h>

// protos
void print_name(char *ptr);

int main(void)
{
    printf("Hello this is Aimable \
but we haven't been doing good.\n");

    // most convenient way to do that
    printf("Hello,this is Aimable "
        "How have you been doing?\n");

    // Q0. how are string stored: as array of chars
    // Q1. How are they passed to some functions as args
    char name[8] = {'A', 'i', 'm', 'a', 'b', 'l', 'e', '\0'};
    char *ptr = &name[0];
    // consider this
    printf(ptr);
    printf("\n");

    printf("---\n");
    print_name("Aimable");
    print_name("Karake Emmanuelle");
    return 0;
}


void print_name(char *ptr)
{
    printf(ptr);
    printf("\n");
}
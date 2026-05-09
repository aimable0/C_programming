#include <stdio.h>

int main(void)
{
    // writing.
    // printf - accept formating.
    // puts; - adds a newline char.
    puts("Hello people");

    // a couple of things you can do with printf.
    printf("%.5s\n", "Aimable");
    printf("%35s\n", "Hello, this is Aimable!");
    printf("%35s\n", "Hello, People!");

    // reading data.
    char name[10];
    fgets(name, sizeof(name), stdin);
    printf("Name: ");
    puts(name);

    return 0;
}

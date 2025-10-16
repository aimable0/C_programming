#include<stdio.h>
#include<string.h>

int main(void)
{

    char ch;
    char greetings[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char name[20];
    printf("Enter name: ");
    // scanf("%s", name);
    // gets(name);
    fgets(name, strlen(name), stdin);
    printf("length: %lu\n", strlen(name));
    printf("%s %s!\n", greetings, name);
    printf("last character: %c - last: %c\n", name[5], name[6]);
    return 0;
}
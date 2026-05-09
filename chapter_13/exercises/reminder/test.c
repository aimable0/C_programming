#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// idiomatized strlen
size_t my_strlen(char *s)
{
    const char *p = s; //* stores the starting point (address)
    // let's move to the end of the string
    while (*s)
        s++; // *s is to 0 if the char is '\0'
    return s - p; // pointer arthimetic
}

// how do you think strcat could be implemented ?
char *my_strcat(char *s1, const char *s2)
{
    // note: const means values pointed to by s2 shouldn't be altered.
    // but the pointer itself can change.
    char *p = s1;
    while (*s1)
        s1++;
    while ((*s1++ = *s2++))
        ;

    return p;
}

int main(void)
{
    // how does sprintf works
    char visitor1[45] = "Aimable";
    char visitor2[45] = "and Jeanluc";
    char *new_str = my_strcat(visitor1, visitor2);
    printf("New string is: %s\n", new_str);

    // how do we effeciently store array of strings.
    // we could use something like planets[][8]; we can right omitt the rows.. but 8 signify how long a string will be
    // we could also effectively use ragged strings. (which is also what's used in argv .. *argv[])
    // an array of pointers to strings.
    char *planets[] = {
        "Mars", "Saturne", "Jupiter", "Earth", "Moon", "Pluto"};

    for (int i = 0; i < 6; i++)
    {
        char msg[255];
        sprintf(msg, "Planet %s", planets[i]);
        printf("%s\n", msg);
    }

    return 0;
}
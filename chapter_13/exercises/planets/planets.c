#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    // notice: **p is a pointer to a pointer to a string..
    // argv[1] is a pointer to a string so adding & is to refer to address of this pointer..
    for (char **p = &argv[1]; *p != NULL; p++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (strcmp(planets[i], *p) == 0)
            {
                char msg[255];
                sprintf(msg, "%s is planet %d", planets[i], i + 1);
                printf("%s\n", msg);
                break;
            }
            else if (i == 8)
            {
                printf("%s is not a planet\n", *p);
            }
        }
    }
    return 0;
}
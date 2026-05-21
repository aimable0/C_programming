#include <stdio.h>
#include <string.h>
#define MAX_LEN 20

int main(void)
{
    char smallest[MAX_LEN], largest[MAX_LEN];
    char input[MAX_LEN];

    printf("Enter word: ");
    scanf("%s", input);
    while (strlen(input) != 4)
    {
        if (strcmp(input, largest) > 0)
            strcpy(largest, input);
        if (strcmp(input, smallest) < 0)
            strcpy(smallest, input);
        printf("Enter word: ");
        scanf("%s", input);
    }
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
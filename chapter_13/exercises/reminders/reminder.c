#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_REMINDERS 100
#define CHARS_LIMIT 256

int main(void)
{
    char reminders[MAX_REMINDERS][CHARS_LIMIT];
    char line[CHARS_LIMIT];

    int i = 0;
    while (true)
    {
        printf("Enter day and reminder: ");
        fgets(line, MAX_REMINDERS - 1, stdin);

        printf("when compared: %d\n", strcmp(line, "quit")); // WHY IS THIS NOT WORKING...
        if (strcmp(line, "quit") == 0)
            break;

        strcpy(reminders[i], line);
        printf("Reminder: %s\n", reminders[i]);
        i++;
    }

    printf("Reminders: \n");
    for (int k = 0; k < i; k++)
        printf("\t%s", reminders[i]);

    return 0;
}

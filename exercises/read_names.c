#include <stdio.h>
#include <stdlib.h>

#define MAX_CHARACTERS 50
#define INIT_TOT_STUDENTS 10
int main(void)
{
    char **emails_addresses = malloc(INIT_TOT_STUDENTS * sizeof(char *));
    for (int i = 0; i < INIT_TOT_STUDENTS; i++)
        emails_addresses[i] = malloc(MAX_CHARACTERS * sizeof(char));

    for (int i = 0; i < INIT_TOT_STUDENTS; i++)
    {
        printf("Enter email for student %d: ", i + 1);
        scanf("%s", emails_addresses[i]);
    }

    // display names
    for (int i = 0; i < INIT_TOT_STUDENTS; i++)
    {
        printf("student name %d - %s \n", i, emails_addresses[i]);
    }



    //!\ trying to resize to only 5. (not sure what I am doing)
    emails_addresses = realloc(emails_addresses, (sizeof(char *) * 5));

    // display names with resized array.
    printf("Reallocating .. and resizing to just five students.\n");
    for (int i = 0; i < INIT_TOT_STUDENTS - 5; i++)
    {
        printf("student name %d - %s \n", i, emails_addresses[i]);
    }


    // free memory
    for (int i = 0; i < INIT_TOT_STUDENTS - 5; i++)
        free(emails_addresses[i]);

    free(emails_addresses);
}
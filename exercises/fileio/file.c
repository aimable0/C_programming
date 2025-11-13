#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // FILE *file = fopen("students.csv", "a");
    // if (file == NULL)
    //     return 1;


    // char *name = malloc(sizeof(char) * 10);
    // int grade;
    // int i = 0;
    // while(i < 5)
    // {
    //     printf("Enter student name: ");
    //     scanf("%s", name);
    //     printf("Enter student grade: ");
    //     scanf("%d", &grade);
    //     fprintf(file, "%s,%d\n", name, grade);
    //     i++;
    //     printf("\n");
    // }

    // fclose(file);

    FILE *file = fopen("credo.csv", "w");
    if(file == NULL)
    {
        perror("Error");
        exit(1);
        // fprintf(stderr, "File doesn't exist\n");
    }
    printf("Got here\n");
    // printf("== Read from file ===\n");
    // while(fscanf(file, "%s,%d\n", name, &grade) == 2)
    // {
    //     printf("Name: %s, grade: %d\n", name, grade);
    // }



}
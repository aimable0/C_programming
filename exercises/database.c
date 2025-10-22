#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10;

struct Student
{
    int id;
    char name[50];
    float gpa;
};

int main()
{
    // struct Student *s = (struct Student *) malloc(sizeof(struct Student));
    // s ->id = 1;
    // strcpy(s->name, "Alice");
    // s ->gpa = 3.9;

    struct Student **students = malloc(10 * sizeof(struct Student *)); // for 10 students

    for (int i = 0; i < 10; i++)
    {
        students[i] = malloc(sizeof(struct Student));
    }

    // add students sample (This should be in a function)
    students[0]->id = 1;
    strcpy(students[0]->name, "James");
    students[0]->gpa = 3.5;

    students[1]->id = 2;
    strcpy(students[1]->name, "Max");
    students[1]->gpa = 2.5;

    students[2]->id = 3;
    strcpy(students[2]->name, "Jim");
    students[2]->gpa = 4.5;

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i);
        printf("id: %d\nname:%s\ngpa: %f\n", students[i]->id, students[i]->name, students[i]->gpa);
        printf("\n");
    }


    students[2]->id = 3;
    strcpy(students[2]->name, "updated");
    students[2]->gpa = 1.5;

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d:\n", i);
        printf("id: %d\nname:%s\ngpa: %f\n", students[i]->id, students[i]->name, students[i]->gpa);
        printf("\n");
    }

    // freeing ... this should be better in a functioon
    for (int i = 0; i < 10; i++)
    {
        free(students[i]);
    }
    free(students);
    return 0;
}

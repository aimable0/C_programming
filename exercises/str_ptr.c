#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Student
{
    int id;
    char name[50];
    float gpa;
};

void updateGPA(struct Student *p);


int main(void)
{
    struct Student s = {20, "Tamu", 4.5};
    struct Student *p = &s;
    printf("id: %d\nname:%s\ngpa: %f\n", s.id, s.name, s.gpa);
    updateGPA(p);
    printf("id: %d\nname:%s\ngpa: %f\n", s.id, s.name, s.gpa);
}

void updateGPA(struct Student *p)
{
    p->gpa = 5.0;
}
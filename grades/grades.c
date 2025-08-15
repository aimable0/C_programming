#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100)
    {
        printf("Grade out of range");
    }
    else if (grade >= 90)
    {
        printf("Letter grade: A");
    }
    else if (grade >= 80)
    {
        printf("Letter grade: B");
    }
    else if (grade >= 70)
    {
        printf("Letter grade: C");
    }
    else if (grade >= 60)
    {
        printf("Letter grade: D");
    }
    else
    {
        printf("Letter grade: F");
    }
    printf("\n");
}
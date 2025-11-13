#include <stdio.h>
#include <stdlib.h>

// global variables
int score[20] = {0};
int top = 0;

void displayData()
{
    printf("Displaying data ..\n");
    for (int i = 0; i < top; i++)
    {
        printf("Score[%d]: %d\n", i, score[i]);
    }
}

void updateEntry()
{

    scanf("%c");


    int data = 0;
    printf("Enter score to save: ");
    scanf("%d", &data);

    if (top < 20)
    {
        score[top] = data;
        top++;
    }
    else
    {
        printf("Stack overflow!\n");
    }
}

void deleteRecord()
{

    if (top >= 0)
    {
        score[top] = 0;
        top--;
        printf("Latest record deleted!\n");
    }
    else
    {
        printf("Stack underflow\n");
    }
}

void exitProgram()
{
    printf("Byee!");
    exit(0);
}

int main()
{
    int choice;

    void (*menu[4])() = {
        displayData, updateEntry, deleteRecord, exitProgram};

    do
    {
        printf("\nMenu: \n");
        printf("-- 0. Display Data\n");
        printf("-- 1. Update Entry\n");
        printf("-- 2. deleteRecord\n");
        printf("-- 3. exit program\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice >= 0 && choice < 4)
        {
            menu[choice](); // call the selected function dynamically
        }
        else
        {
            printf("Invalid choice.\n");
        }
    } while (choice != 3);
}
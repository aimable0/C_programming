#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TASKS 15
#define MAX_SIZE 255

/**
 * extract_date: extract month day in a string (task)
 *
 * return: day of month (integer).
 */
int extract_date(char task[MAX_SIZE])
{
    if (task[1] == ' ')
        return (int)task[0] - 48;
    else
        return (((int)task[0] - 48) * 10) + (((int)task[1]) - 48);
}

/**
 * sort_list - compare two strings (date portion to be exact) and sort them.
 */
void sort_list(char tasks[MAX_TASKS][MAX_SIZE], int tasks_size)
{
    int date1, date2;
    bool moved = true;
    while (moved)
    {
        moved = false;
        for (int i = 0; i < tasks_size - 1 && strcmp(tasks[i], "0") != 0; i++)
        {
            date1 = extract_date(tasks[i]);
            date2 = extract_date(tasks[i + 1]);

            if (date1 > date2)
            {
                char *temp = malloc(MAX_SIZE);
                strcpy(temp, tasks[i]);
                strcpy(tasks[i], tasks[i + 1]);
                strcpy(tasks[i + 1], temp);
                moved = true;
                free(temp);
            }
            else if (date1 == date2)
            {
                // compare strings character by character
                int len1 = strlen(tasks[i]);
                int len2 = strlen(tasks[i + 1]);

                int j = 0;
                int k = 0;
                while (true)
                {
                    if (j > len1 || k > len2) //! Not sure about this..
                        break;

                    char c1 = tasks[i][j];
                    char c2 = tasks[i + 1][k];
                    if (!isalpha(c1))
                    {
                        j++;
                        continue;
                    }
                    if (!isalpha(c2))
                    {
                        k++;
                        continue;
                    }
                    if (c1 < c2)
                    {
                        // swap strings.
                        char *temp = malloc(MAX_SIZE);
                        strcpy(temp, tasks[i]);
                        strcpy(tasks[i], tasks[i + 1]);
                        strcpy(tasks[i + 1], temp);
                        moved = true;
                        free(temp);

                        printf("Swappedd...\n");
                        break;
                    }
                    else if (c1 > c2)
                    {
                        break;
                    }
                    j++;
                    k++;
                }
            }
        }
    }
}

int main(void)
{
    char tasks[MAX_TASKS][MAX_SIZE];
    char user_input[MAX_SIZE];
    int size = MAX_SIZE;
    int task_size = 0;
    while (strcmp(user_input, "0\n") != 0 && task_size <= MAX_TASKS)
    {

        fgets(user_input, size, stdin);
        int len = strlen(user_input) - 1; // length without newline char..
        strncpy(tasks[task_size], user_input, len);
        tasks[task_size][len] = '\0'; // terminate string.
        task_size++;
    }
    task_size--; // remove the last "0" task.

    // sort info
    printf("\n== Orignal: ==\n");
    for (int i = 0; i < task_size; i++)
        printf("%d: %s\n", i, tasks[i]);

    sort_list(tasks, task_size);
    printf("\n== Sorted data: ==\n");
    for (int i = 0; i < task_size; i++)
    {
        printf("%d: %s\n", i, tasks[i]);
    }

    return 0;
}
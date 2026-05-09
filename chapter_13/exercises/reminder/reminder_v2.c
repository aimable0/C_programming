#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TASKS 15
#define MAX_SIZE 255

/**
 * sort_list - compare two strings (date portion to be exact) and sort them.
 */
void sort_list(char tasks[MAX_TASKS][MAX_SIZE], int tasks_size, int days[MAX_TASKS])
{
    bool moved = true;
    while (moved)
    {
        moved = false;
        for (int i = 0; i < tasks_size - 1 && tasks_size > 1; i++)
        {
            printf("%d vs %d\n", days[i], days[i + 1]);
            if (days[i] > days[i + 1])
            {
                // swap strings (tasks).
                char *temp = malloc(MAX_SIZE);
                strcpy(temp, tasks[i]);
                strcpy(tasks[i], tasks[i + 1]);
                strcpy(tasks[i + 1], temp);

                // swap days
                int temp_d = days[i];
                days[i] = days[i + 1];
                days[i + 1] = temp_d;

                free(temp);
                moved = true;
            }
            else if (days[i] == days[i + 1])
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

                    char c1 = tolower(tasks[i][j]);
                    char c2 = tolower(tasks[i + 1][k]);
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

                        // swap days
                        int temp_d = days[i];
                        days[i] = days[i + 1];
                        days[i + 1] = temp_d;

                        moved = true;
                        free(temp);
                        break;
                    }
                    else if (c1 > c2)
                        break;

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
    int days[MAX_TASKS] = {0};

    char user_input[MAX_SIZE];
    int size = MAX_SIZE;
    int task_size = 0;

    while (task_size < MAX_TASKS)
    {
        printf("Enter day and reminder: ");
        int day;
        scanf("%d", &day);

        if (day == 0)
            break;

        days[task_size] = day;
        fgets(user_input, size, stdin);
        int len = strlen(user_input) - 1; // length without newline char..
        strncpy(tasks[task_size], user_input, len);
        tasks[task_size][len] = '\0'; // terminate string.
        task_size++;
    }

    // sorted info
    sort_list(tasks, task_size, days);

    printf("\n\nDay  Reminder\n");
    for (int i = 0; i < task_size; i++)
    {
        char msg = malloc(255);
        sprintf(msg, "%3d %s", days[i], tasks[i]);
        printf("%s");
    }
    printf("\n");

    return 0;
}

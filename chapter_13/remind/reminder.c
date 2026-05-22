/* Prints a one-month reminder list sorted */
#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 70    /* max length of reminder message */

int read_line(char str[], int n);
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], time_str[6], month_str[3], msg_str[MSG_LEN + 1];
    int month, day, i, j, num_remind = 0;
    int hr, min;
    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }
        printf("Enter month/day, time and reminder: ");
        scanf("%2d/", &month);
        if (month == 0)
            break;

        scanf("%2d", &day);
        if (day < 0 || day > 31)
        {
            read_line(msg_str, MSG_LEN);
            printf("Incorrect day!\n");
            continue;
        }

        // Capture time.
        scanf("%2d:%2d", &hr, &min);
        sprintf(month_str, "%.2d", month);
        sprintf(day_str, "%.2d", day);
        sprintf(time_str, "%.2d:%.2d", hr, min);
        read_line(msg_str, MSG_LEN);

        char temp[MSG_LEN];
        strcpy(temp, month_str);
        strcat(temp, "/");
        strcat(temp, day_str);
        strcat(temp, " ");
        strcat(temp, time_str);
        strcat(temp, msg_str);

        for (i = 0; i < num_remind; i++)
            if (strcmp(temp, reminders[i]) < 0)
                break;

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        strcpy(reminders[i], temp);
        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);
    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
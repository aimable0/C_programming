#include <stdio.h>
#include <string.h>

int main(void)
{
    // char timestr1[7];
    // char timestr2[7];
    // sprintf(timestr2, "%.2d:%.2d", 1, 1);
    // sprintf(timestr1, "%.2d:%.2d", 1, 11);
    // // printf("time: %.2d:%.2d\n", 12, 1);
    // // printf("time: %.2d:%.2d\n", 4, 1);
    // printf("time %s\n\n", timestr1);
    // printf("time %s\n", timestr2);

    // if (strcmp(timestr1, timestr2) > 0)
    //     printf("%s is later than %s\n", timestr1, timestr2);
    // else if (strcmp(timestr1, timestr2) < 0)
    //     printf("%s is earlier than %s\n", timestr1, timestr2);
    // else
    //     printf("Same time\n");

    char str1[255] = "7 14:00 Jame's birthday";
    char str2[255] = "6 13:00 Pet's birthday";

    if (strcmp(str1, str2) > 0)
        printf("[STR1] have time that comes later\n");
    else
        printf("[STR1] has the time that comes earlier\n");

    return 0;
}

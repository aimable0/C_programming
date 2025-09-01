/* we are going to use another approach to check for repeated numbers.. */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10] = {false}; //false
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);



    digit_seen[n] = true;
    int i = 1;
    int checker = 0;
    while(i > 0) {
        printf("n = %d \n", n + 1);
        scanf("%1d", &n);
        if (digit_seen[n] == true) {
            printf("HAS DUPLICATES\n");
            goto end;
        } else if (n >= 0 && n < 10) {
            digit_seen[n] = true;
            printf("Got here with %d\n - checker: %d", n, checker);
            i = 1;
        }
        else {
            i = 0;
        }
        checker++;

    }
    printf("HAS NO DUPLICATES\n");

    end: return 0;
}
// Author: N Aimable
// Purpose: writes two-digit provided by the user in english words
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf ("%d", &num);

    int tens_num = num - (num % 10);
    int ones_num = num % 10;

    printf("You entered the number ");
    if (num < 20) {
        // dealing with tens below 20/
        switch (num) {
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
    } else {
        // dealing with tens above 20
        switch (tens_num) {
            case 20: printf("twenty-"); break;
            case 30: printf("thirty-"); break;
            case 40: printf("forty-"); break;
            case 50: printf("fifty-"); break;
            case 60: printf("sixty-"); break;
            case 70: printf("seventy-"); break;
            case 80: printf("eighty-"); break;
            case 90: printf("ninty-"); break;
        }

        // dealing with ones
        switch (ones_num) {
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            default: printf("\b");
        }
    }
    printf("\n");



    return 0;
}
// Author: N Aimable
// Purpose: writes two-digit provided by the user in english words
// Date: 15/08/2025
// Modified: 22/05/2026

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    int tens_num = num - (num % 10);
    int ones_num = num % 10;

    // empty strings have been used for alignment purposed.
    char *numbers[] = {
        "",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty-",
        [30] = "thirty-",
        [40] = "forty-",
        [50] = "fifty-",
        [60] = "sixty-",
        [70] = "seventy-",
        [80] = "eighty-",
        [90] = "ninty",
    };

    printf("You entered the number ");
    if (num < 20)
    {
        printf("%s\n", numbers[num]);
    }
    else
    {
        printf("%s", numbers[tens_num]);
        printf("%s\n", numbers[ones_num]);
    }

    return 0;
}

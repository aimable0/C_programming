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
    };
    char *prefix[] = {
        "", "", "twenty-", "thirty-", "forty-", "sixty-", "seventy-", "eighty-", "ninty-"};

    printf("You entered the number ");
    if (num < 20)
    {
        printf("%s", numbers[num]);
    }
    else
    {
        printf("%s", prefix[tens_num / 10]);
        printf("%s", numbers[ones_num]);
    }
    printf("\n");

    return 0;
}
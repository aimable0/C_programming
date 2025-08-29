// Author: N Aimable
// Purpose: recieves a number from the user and prints it in octal form
// Date: 08 Aug 2025
#include <stdio.h>

int main(void)
{
    // int num;
    // printf("Enter a number between 0 and 32767: " );
    // scanf("%i", &num);
    // printf("%.5o\n", num);
    // // printf("%.5d\n", 3641);


    // using a more sophisticated
    int num;
    int d5, d4, d3, d2, d1;

    printf("Enter a number between 0 and 32767: " );
    scanf("%i", &num);

    d5 = num % 8;
    int quotient = num / 8;
    d4 = quotient % 8;

    quotient /= 8;
    d3 = quotient % 8;

    quotient /= 8;
    d2 = quotient % 8;

    quotient /= 8;
    d1 = quotient % 8;

    printf("%d%d%d%d%d\n", d1, d2, d3, d4, d5);

    return 0;
}
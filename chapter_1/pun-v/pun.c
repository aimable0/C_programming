/*
 * Name: pun.c
 * Purpose: prints a bad pun
 * Author: K. N. King
 */

#include <stdio.h>
#define TOTAL (100/2) //macro definition (useful for defining Constants)

int main(void)      /* Beginning of the main program */
{

    // examples
    // initialization

    int height, length, width = 10; // this is faulty .. the value 10 only is assigned to the width.
    height = 5;
    length += 11;


    // its great to write flaots with a little 'f'
    printf("Hello, %d - %d - %d \n", height, length, width);
    printf("%d\n", TOTAL);



    // truncation pitfall
    int num1 = 5;
    int num2 = 9;
    printf("%d\n", num1 / num2);

    // avoiding truncation when not needed
    float num3 = 5.0f;
    float num4 = 9.0f;
    printf("%f\n", num3/num4);

    // receiving input from the user
    float x;
    printf("Enter x: ");

    // The program will allow numebrs that aren’t integers
    scanf("%f", &x);
    printf("X => %.2f\n", x);


    // identifiers
    // these are names to functions, varibales, macros etc

    return (1);
}
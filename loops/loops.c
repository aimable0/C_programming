#include <stdio.h>

int main(void)
{
    // loops

    // since this is false
    // do
    // {
    //     printf("Hello, this is a do\n");
    // } while (5 > 5); // this is false but still the code will run atleast once.

    // // print number from 0 - 5
    // // using a while

    // int i = 0;
    // printf("This is a while:\n");
    // while (i < 5)
    // {
    //     printf("Number: %d\n", i);
    //     i++;
    // }

    // printf("This is for loop\n");

    // for (int i = 0; i < 5; i++) {
    //     printf("Number: %d\n", i);
    // }


    // // try print a table of squares
    // int entries;
    // printf("Enter number of entries in the table: ");
    // scanf("%d", &entries);

    // int n = 0;
    // while(n < entries) {
    //     // printf("%d         %d\n", (n++), (n * n)); // undefined behaviour caused by un specified order of evaluation
    //     // in the code above I was trying to use/ access n and modify it in the same expression

    //     // correct code
    //     n++;
    //     printf("%5d%10d\n", n, (n * n));
    // }


    // short program that sum user's series of integers

    printf("Enter integers (0 to terminate): ");
    int typed_num;
    int sum = 0;

    // here's how scanf would behave without while
    // scanf("%d", &typed_num); // asume the user gave this  serie of integers number: '1 2 3 4 5'  L>Enter
    // scanf will only take one number and it leave 2, 3, 4, 5 numbers in to be read by next scanf from the hiddern buffer
    // printf("%d\n", typed_num); //expected: just '1' the first number.

    // Here's how scanf behaves when its in while context
    while (typed_num != 0) {
        scanf("%d", &typed_num);   // scanf will be called each time as along as the expression in the while is true.
        // and each time it will be pulling a number from the serie of integers provided by the user
        // enter can't terminate this scanf call .. because it's as though it will be forever being called (waiting for user input).
        // until while expression turns false -- or run forever (if no mechanims to turn it into a false expression)
        // printf("typed-num: %d\n", typed_num); //expected: typed num by user.

        sum += typed_num;
    }
    printf("The sum is: %d\n", sum);



    // trying to see the effect betwee post- and pre-fix of ++ -- in a loop
    // int i = 10;
    // while (i > 0) {
    //     printf("T minus %d and counting\n", i);
    //     i--;
    // }

    // using for
    // for (int i = 10; i > 0; i--)
    //     printf("T minus %d and counting\n", i);
    // conclusion: no effect; they infact exper1 and expre3 in for are useful for their side effects
    // i.e the values they produce when executed are irrelevant. so i++ & ++i have the same side effect in final analysis


    // incrementing several variables each time
    for (int i = 10, j = 1; i > 0; i--, j++) {
        printf("%2d  %2d\n", i, j);
    }

    return 0;
}
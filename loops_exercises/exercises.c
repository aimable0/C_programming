#include <stdio.h>

int main(void)
{
    printf("-----------\n");

    // exercise 1
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("-------\n");

    // exercise 2
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;    // because of truncation .. this will remove whatever the last digit was ..
    } while (i > 0);
    printf("-------\n");

    // exercise 3
    // for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    //     printf("%d ", i);
    // printf("\n");

    // exercise 4 -- comparing kinda similar but different loops

    printf("Qeustion 4\n");
    for (i = 0; i < 2; ++i) {
        printf("i = %d\n", i);      // Expected the first i to be zero. and I won't reach value 2
    }
    printf("-------\n");
    for (i = 0; i < 2; ++i){
        printf("i = %d\n", i);      // Expected the first i to be zero. and I won't reach value 2

    }
    printf("-------\n");
    for (i = 0; i++ < 2; ) {
        printf("i = %d\n", i);      // Expected: the first i to be 1; and I to reach value 2 becaause i++ < 2
    }

    // exercise 5
    // exercise 6
    // Task: Translating program fragment exe1 into a single for statement
    // exercise 1
    // int i = 1;
    printf("------\n");
    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n--------\n");

    // its equivalent single for statement
    for(int i = 1; i <= 128; i *= 2) printf("%d ", i);
    printf("\n-------\n");


    // exercise 7
    // Task: translate the program fragment of exe2 int a single for statement

    // exe2 while:
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    printf("\n--------\n");

    // it's equivalent for:
    for (int i = 9384; i > 0; i /= 10) printf("%d ", i);
    printf("\n--------\n");

    // exercise 8
    // What output does the following for statement produce?
    // for (i = 10; i >= 1; i /= 2)
    //     printf("%d ", i++);   // Expected: 10 - 5 - 3 - 2 - 1 -- infinite 1; (correct)


    // exercises 9
    // task: translate the exercise 8 for into a while loop
    // i = 10;
    // while (i >= 1) {
    //     printf("%d ", i++);
    //     i /= 2; // Expected: the same as exercise 8..
    // }
    // printf("\n--------\n");

    // exercise 10
    // Task: Show how to replace a continue statement by an equivalent goto statement.
    // example with a continue
    // program: let's write a short example that print even and skips (continues) when odd number reached
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0)
            continue; // since it's a single statement no need for braces.
        printf("%d ", i); // Expected: 0 2 4 6 8;
    }
    printf("\n--------\n");

    // Le'ts write a same programm using goto (using labels) instead of continue;
    for (int i = 0; i < 10; i++) {
        // it's worth noting that 'int i = 0;' create a variable i that's available only in this current for.
        if (i% 2 != 0)
            goto end;
        printf("%d ", i);
        end:;   // label name is 'end' the ';' following end: indicates that it's a null statement.
    }
    printf("\n--------\n");

    // exercise 11
    // Task: What output does the following program fragment produce?
    int sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)    // Expected: to be true when i % 2 results into something other than 0 ex 2 % 2 results into 1
            continue; // skipping odd ( since odd number would result i number other than zero (0) which makes the if true)
        sum += i;   // Expected: 2 + 4 + 6 + 8
    }
    printf("%d\n", sum);

    // exercise 13
    // Task: Rewrite the following loop so that its body is empty:
    int n, m;
    for (n = 0; m > 0; n++)
        m /= 2;

    // how it can be written with an empty body.
    for (n = 0; m > 0; n++, m /= 2);

    // a more preferrable clear way to write it would be
    for (n = 0; m > 0; n++, m /= 2)
        /* empty body */;


    // exercise 14
    // Task: Find the error in the following program fragment and fix it.
    // if (n % 2 == 0); // the ';' on this line terminates the if and considers it to be an if with null statement body
        // printf("n is even\n");
        // optional correction: printf("n is even\n"); 'should probably' be printf("%d is even\n", n);


    printf("\n--------\n");
    // exercise 12 -- to be thought about....
    int d;
    n = 7;
    for (d = 2; d * d < n; d++)
        printf("%d\n", d);
        // if (n % d == 0)
        //     break;


    // let's check if the loop ended prematurely
    if (d < n)
        printf("n is not a prime\n");
    else
        printf("n is a prime\n");

    printf("\n-----------\n");
    return 0;
}
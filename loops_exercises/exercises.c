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
    // Task: translating program fragment exe1 into a single for statement
    // exercise 1
    // int i = 1;
    printf("------\n");
    i = 1;
    while (i <= 128) {
        printf("%d\n", i);
        i *= 2;
    }
    printf("------\n");

    // its equivalent single for statement
    for(int i = 1; i <= 128; i *= 2) printf("%d\n", i);
    printf("------\n");


    // exercise 7
    // task: translate the program fragment of exe2 int a single for statement

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
    // task: Show how to replace a continue statement by an equivalent goto statement.
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
    // What output does the following program fragment produce?
    


    // exercise 12
    // exercise 13
    // exercise 14

    printf("\n-----------\n");
    return 0;
}
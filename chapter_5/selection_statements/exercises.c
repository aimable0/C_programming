#include <stdio.h>
// #include <stbool.h>

int main()
{
    int i, j, k;

    // question 0
    // i = 2; j = 3;
    // k = i * j == 6;
    // printf("%d", k);
    // printf("\n");

    // i = 5; j = 10; k = 1;
    // printf("%d", k > i < j);
    // printf("\n");


    // i = 3; j = 2; k = 1;
    // printf("%d", i < j == j < k);
    // printf("\n");

    // i = 3; j = 4; k = 5;
    // printf("%d", i % j + i < k);
    // printf("\n");


    // i = 3; j = 4; k = 5;
    // printf("%d", i % j + i < k);
    // printf("\n");


    // question 1
    // i = 10; j = 5;
    // printf("%d", !i < j);
    // printf("\n");

    // i = 2; j = 1;
    // printf("%d", !!i + !j);
    // printf("\n");

    i = 5; j = 0; k = -5;
    printf("%d", i && j || k);
    printf("\n");

    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);
    printf("\n");

    // single expression whose value is either -1 0 +1 depending on whether i is less, equal or greater to j
    // i = 5;
    // j = 10;
    // (i >= j) || i < j;
    // printf("\n");


    // What does the following statement print if i has the value 17? What does it print if i has the value –17?
    printf("%d\n", i >= 0 ? i : -i);
    printf("\n");

    // question x
    i = 3;
    j = 4;
    k = 5;

    printf("\n");



    // shortining if statements in single assignment.
    // if (age >= 13)
    //     if (age <= 19)
    //         teenager = true;
    //     else
    //         teenager = false;
    // else if (age < 13)
    //         teenager = false;

    // // shorter version of the above selection statement(s).
    // teenager = (age >= 13 && age <= 19) ? true : false;
    // teenager = (age >= 13 && age <= 19);  // the most simplest and shortest probably no the most clearest and quick to understand.

    // question #9.
    // comparing two if statements.

    int score = 80;

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    printf("--");

    // checkv2
    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");

    printf("\n");

    i = 1;
    printf("num: %d\n", 1 % 3);
    // switch (i % 3) {
    //     case 0: printf("zero");
    //     case 1: printf("one");
    //     case 2: printf("two");
    //     default:
    //         printf("nothing!\n");
    // }

    // activity question #3
    // dealing with logical expression.
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k);
    printf("\n");

    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);
    printf("\n");

    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);
    printf("\n");
}
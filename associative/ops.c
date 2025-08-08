#include <stdio.h>

int main(void)
{
    int i = 5;
    int j = 2;
    int k = 6;

    // we want to show that i *= j + k !=> i  = i * j + k
    printf("value: %d\n", i *= j + k);

    // at this point i has already been updated by the = operator in the above printf (side effect in action!)
    // that can also happen if you mistakenly write if (x = 1) => this will run and always be true and update x..
    // try to avoid that by giving an what could be an invalid lvalue like if (1 == x)
    // such that if you mistakenly write (1 = x) instead of (1 == x) you get an lvalue error.

    printf("value: %d\n", i = i * j + k);

    // it's also worth noting that compound assignemt is right associative just like = operator/


    // some excercises

    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d", i, j);
    printf("\n");

    i = j = k = 1;
    i += j += k;
    printf("%d %d %d", i, j, k);
    printf("\n");

    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d", i, j, k);
    printf("\n");

    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);
    printf("\n");


    i = 6;
    j = i += i;
    printf("%d %d", i, j);
    printf("\n");

    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);
    printf("\n");


    // i = 7;
    // j = 6 + (i = 2.5);
    // printf("%d %d", i, j);
    // printf("\n");

    // i = 2; j = 8;
    // j = (i = 6) + (j = 3);
    // printf("%d %d", i, j);
    // printf("\n");

    i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);
    printf("\n");

    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);
    printf("\n");

    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
    printf("\n");


    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);
    printf("\n");


    // more exrcses
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);
    printf("\n");

    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);
    printf("\n");

    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);
    printf("\n");
}
#include <stdio.h>

int main(void)
{
    printf("-----------\n");

    // question 1
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");

    // question 2
    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;    // because of truncation .. this will remove whatever the last digit was ..
    } while (i > 0);
    printf("\n");

    // question 3
    // for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    //     printf("%d ", i);
    // printf("\n");

    // question 4 -- comparing kinda similar but different loops

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

    // question 5
    // question 6
    // Task: translating program fragment exe1 into a single for
    

    // question 7
    // question 8
    // question 9
    // question 10
    // question 11
    // question 12
    // question 13
    // question 14

    printf("\n-----------\n");
    return 0;
}
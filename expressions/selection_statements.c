#include <stdio.h>

int main(void)
{
    if (1) {
        printf("Hello - This is singular statement\n");
    } else {
        printf("nonono!");
    }

    if (1) {
        printf("{ Not hello\n");
        printf("This is group of statemente }\n");
    }

    if (1 < 2)
        printf("1 < 2\n");
    else if (1 > 2)
        printf("1 > 2\n");
    else if (1 < 2)
        printf("drining");
    else
        printf("1 == 2");


    // conditional operator
    int a = (1 > 2) ? 1 : 2;
    printf("%d\n", a);

    printf("\n");
    return 0;
}
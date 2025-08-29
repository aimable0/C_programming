#include <stdio.h>

int main(void)
{
    if (1) {
        printf("Hello - This is singular statement\n");
    } else {
        printf("nonono!");
    }
    // using conditional operator
    int i = 2;
    int j = 3;
    printf("%d\n", (i > j) ? i : j);

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


    // conditional operator : allows an expression to produce one of two values depending on the value of a condition.
    // this ( ? and : ) operator is not unary operator nor binary operator but ternary operator: bcz it needs three operands
    // expr1 ? expr2 : expr3 => if expr1 then (produce value of) expr2 else exrp3.
    int a = (1 > 2) ? 1 : 2;
    printf("%d\n", a);

    printf("\n");
    return 0;
}
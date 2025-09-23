#include <stdio.h>

int add(int a, int b);
void main(void)
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("The sum is: %d \n", sum);
}

int add(int a, int b)
{
    int added = a + b;
    return added;
}


&& (row != 9 && (col -1) != 9)
block also move from right .. and left from one col to ther other on edges
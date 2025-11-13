#include <stdio.h>


int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int multi(int a, int b) {return a * b;}
int divide(int a, int b) {return b != 0 ? a / b: 0;}
int remainder(int a, int b) {return a % b;}

// apply
int apply(int (*operation)(int, int), int x, int y)
{
    return operation(x, y);
}

int main()
{
    printf("Add: %d\n", apply(add, 4, 1));
    printf("Add: %d\n", add(4, 1));


    
    printf("sub: %d\n", apply(sub, 4, 1));
    printf("multi: %d\n", apply(multi, 4, 1));
    printf("divide: %d\n", apply(divide, 4, 0));
    printf("remainder: %d\n", apply(remainder, 5, 2));

    return 0;
}

// Purpose: a program that prompts the user to enter a number n,
// then prints all even squares between 1 and n

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number (to get all of its even squares): ");
    scanf("%d", &num);

    for(int i = 0; i * i <= 100; i++) {
        if ((i * i) % 2 == 0) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
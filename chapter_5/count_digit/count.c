// Author: N Aimable
// Purpose: count's digits of a certain provided number by the user
// Date: 2025/14/08


#include <stdio.h>

int main(void)
{

    // int count = 0;
    // for(int i = 0; i < 5; i++)
    // {
    //     remainder = num % 10;
    //     num -= (num - remainder) % 10
    //     count
    // }
    // printf("old num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);


    // num = (num - remainder) / 10;
    // printf("new num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);

    // num = (num - remainder) / 10;
    // printf("new num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);

    // num = (num - remainder) / 10;
    // printf("new num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);

    // num = (num - remainder) / 10;
    // printf("new num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);

    // num = (num - remainder) / 10;
    // printf("new num: %d\n", num);
    // remainder = num % 10;
    // printf("current - remainder = %d\n", remainder);


    // solution:
    // we repeatedly do the above ..
    // if the new num = > 0 we break out of the loop

    int remainder;
    int count = 0;
    int og_num = 0;
    printf("Enter a number: ");
    scanf("%d", &og_num);
    int num = og_num;

    // while(1) {
    //     if (num == 0) {
    //         break;
    //     } else {
    //         remainder = num % 10;
    //         num = (num - remainder) / 10;
    //         count++;
    //     }
    // }

    // using a do. (simplified version)
    do {
        num /= 10;
        count++;
    } while (num > 0);

    // not the best approach but it kinda work -- :)
    printf("The number %d has %d digits\n", og_num, count);
}

#include <stdio.h>
// put to use 'static' keyword

// void double_number_eachtime(void);
int number = 20;

int main(void)
{
    // double_number_eachtime();
    // double_number_eachtime();
    // double_number_eachtime();
    // double_number_eachtime();
    printf("External variable named 'number': %d\n", number);

    int number = 21;
    printf("1  Local variable named 'number': %d\n", number);

    {
        int number = 10;
        printf("2  Block variable named 'number':%d\n", number);
    }
    printf("3  Local variable named 'number': %d\n", number);
    // printf("%d", temp); //temp is not accessible outside of the block.
    return 0;
}

// void double_number_eachtime(void)
// {
//     static int number = 2; // initial number
//     printf("Number is now: %d\n", number);
//     number *= 2; // on each call we will double.
// }


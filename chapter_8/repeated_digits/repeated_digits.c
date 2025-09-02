/* Checking a number for repeated digits */

#include <stdio.h>

int main(void)
{
    int user_num = 0;

    printf("Enter a number: ");
    scanf("%d", &user_num);

    // copy of user num;
    int number = user_num;

    // get size of array
    int size = 0;
    while(user_num != 0) {
        user_num = (user_num - (user_num % 10)) / 10;
        size++;
    }


    // array to store the numbers
    int a[size];  // an example of C99(only)'s variable-length array
    int last_digit; // current lastdigit
    int i = 0;
    while(number != 0) {
        last_digit = number % 10;
        a[i] = last_digit;
        i++;
        number = (number - last_digit) / 10;
    }

    // check if the array stored the right number
    for(int i = 0; i < size; i++) {
        for( int m = 0; m < size; m++) {
            if (i != m && a[i] == a[m]) {
                printf("%d == %d\n", a[i], a[m]);
                printf("HAS DUPLICATES\n");
                goto end;
            }
        }
    }
    printf("HAS NO DUPLICATES\n");

    end: return 0;
}
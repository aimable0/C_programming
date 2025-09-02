#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // constant arrays

    // const int age = 20;
    // printf("age: %d\n", age);

    // age = 21;
    // printf("Age: %d\n", age);

    // using the time library: which return the time as a single number long int.
    unsigned long int time_0 = time(NULL);
    printf("time value: %ld\n", time_0);

    // check whether the random is providing a different number without using the initializor of random number generator (srand)
    // printf("rand value: %d\n", rand()); //give the same random number without using srand()

    // using the srand to check the difference
    srand((unsigned) time(NULL));
    printf("rand value (with srand used): %d\n", rand()); // giving different number each time.

    


}
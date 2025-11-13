#include <stdio.h>
#include <unistd.h> // sleep()
#include <stdbool.h>

#define n 4

void Red()
{
    printf("Red Light...\n");
}

void Green()
{
    printf("Green Light...\n");
}
void Blue()
{
    printf("Blue Light...\n");
}
void Yellow()
{
    printf("Yellow Light...\n");
}

int main()
{
    void (*state[n])() = {Red, Green, Blue, Yellow};

    // traffic running forever.
    int i = 0;
    int timer = 0;
    while(true)
    {
        state[i]();
        sleep(5); // wait 2 seconds
        i++;
        if (i == n)
            i = 0; // reset i
    }
    return 0;
}
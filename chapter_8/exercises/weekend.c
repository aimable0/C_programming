#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // array weekend

    bool weekend[7] = {[0] = true, [6] = true};
    for (int i = 0; i < 7; i++) {
        printf("Day [%d]: %d\n", i + 1, weekend[i]);
    }

}
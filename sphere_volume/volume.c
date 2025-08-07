// formula: v = 4/3PIr^3
#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI 3.14

int main(void)
{
    float radius = 10.0f;
    float volume = FRACTION * PI * (radius * radius * radius);
    printf("%f\n", volume);

    return 0;
}



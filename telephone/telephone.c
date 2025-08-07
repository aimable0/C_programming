#include <stdio.h>

int main(void)
{
    int tel_g1, tel_g2, tel_g3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &tel_g1, &tel_g2, &tel_g3);
    printf("You entered %d.%d.%d\n", tel_g1, tel_g2, tel_g3);
}

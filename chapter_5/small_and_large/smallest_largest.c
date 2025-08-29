// Author: N Aimable
// Purpose: The program recieves four integer and displays largest and smallest
// Date: 15/08/2025

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    // Below would be the logic
    // comparing them in groups of two
    //  - and using a ternary ops to determine the ultimate largest or smallest
    // NOTE: that's probably 'NOT' the best approach but it works :)
    // I will later see how I can refine it (..)

    if (n1 > n2 && n3 > n4)
    {
        printf("Largest: %d\n", (n1 > n3) ? n1 : n3);
        printf("Smallest: %d\n", (n2 < n4) ? n2 : n4);
    }
    else if (n2 > n1 && n3 > n4)
    {
        printf("Largest: %d\n", (n2 > n3) ? n2 : n3);
        printf("Smallest: %d\n", (n1 < n4) ? n1 : n4);
    }
    else if (n1 > n2 && n4 > n3)
    {
        printf("Largest: %d\n", (n1 > n4) ? n1 : n4);
        printf("Smallest: %d\n", (n2 < n3) ? n2 : n3);
    }
    else if (n2 > n1 && n4 > n3)
    {
        printf("Largest: %d\n", (n2 > n4) ? n2 : n4);
        printf("Smallest: %d\n", (n1 < n3) ? n1 : n3);
    }
}
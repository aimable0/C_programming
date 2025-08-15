#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    // What would be the logic (that's no the best approach but it works.)

    if (n1 > n2 && n3 > n4) {
        printf("Largest: %d\n", (n1 > n3) ? n1 : n3);
        printf("Smallest: %d\n", (n2 < n4) ? n2 : n4);
    } else if (n2 > n1 && n3 > n4) {
        printf("Largest: %d\n", (n2 > n3) ? n2 : n3);
        printf("Smallest: %d\n", (n1 < n4) ? n1 : n4);
    } else if (n1 > n2 && n4 > n3) {
        printf("Largest: %d\n", (n1 > n4) ? n1 : n4);
        printf("Smallest: %d\n", (n2 < n3) ? n2 : n3);
    } else if (n2 > n1 && n4 > n3) {
        printf("Largest: %d\n", (n2 > n4) ? n2 : n4);
        printf("Smallest: %d\n", (n1 < n3) ? n1 : n3);
    }

}
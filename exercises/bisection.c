#include <stdio.h>

int main(void)
{
    int list[] = {759, 14, 2, 900, 106, 77, -10, 8, 5, -3};
    int n = 10;
    int i = 0;
    int turn = 0;
    int swap = 0;
    int latest_swap;

    while (turn < 10) {
        latest_swap = swap;
        for (int i = 0; i < n-1; i++) {
            if (list[i] > list[i+1]) {
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
        if (latest_swap == swap) break;
        turn++;
    }

    printf("turns: %d\n", turn);

    for (int i = 0; i < 10; i++)
        printf("%d ", list[i]);

    printf("\n");
    return 0;
}

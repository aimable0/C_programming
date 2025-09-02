/* deals a random hand of cards */
#include <stdio.h>
#include <stdbool.h> /* only for c99 */
#include <time.h>
#include <stdlib.h>
#define NUM_SUIT 4
#define NUM_RANK 13

int main(void)
{
    char suit_code[] = {'c', 'd', 'h', 's'};
    char suit_rank[] = {'2', '3', '4', '5', '6', '7', '8','9','t','j','q','k','a',};
    int suit, rank, n;
    int in_hand[NUM_SUIT][NUM_RANK] = {false}; // this means that the first value is set to false, and all the rest (since all others will be given value: zero)

    srand((unsigned) time(NULL)); // this initalizes C's random number generator

    printf("Enter a number of cards in hand: ");
    scanf("%d", &n);

    printf("Your hand:");
    while (n > 0) {
        suit = rand() % 4;
        rank = rand() % 13;
        if (in_hand[suit][rank] != true) {
            in_hand[suit][rank] = true;
            printf(" %c%c", suit_code[suit], suit_rank[rank]);
            n--;
        } else {
            continue;
        }
    }
    printf("\n");

    return 0;
}
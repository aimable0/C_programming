/* Classifies a poker hand */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define COLS 2 /*for columns in hand*/

/* external variables */
bool straight, flush, four, three, royal_flush, ace_low;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int[][COLS]);
void analyze_hand(int[][COLS]);
void print_result(void);
bool is_in_array(int size, int multiple_rows[size][COLS], int row[COLS]);
void sort_array(int size, int sample[size]);
bool is_in(int a, int b[], int size);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 * repeatedly. *
 **********************************************************/
int main(void)
{
    int hand[NUM_CARDS][COLS];

    for (;;)
    {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}
/**********************************************************
 * read_cards: Reads the cards into the external *
 * variables num_in_rank and num_in_suit; *
 * checks for bad cards and duplicate cards. *
 **********************************************************/
void read_cards(int hand[NUM_CARDS][COLS])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    // initialize hand with zeros
    for (rank = 0; rank < NUM_RANKS; rank++)
        for (suit = 0; suit < COLS; suit++)
            hand[rank][suit] = 0;

    // read card
    while (cards_read < NUM_CARDS)
    {
        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }
        suit_ch = getchar();
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;
        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (is_in_array(cards_read, hand, (int[]){rank, suit}))
            printf("Duplicate card; ignored.\n");
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}
/**********************************************************
 * analyze_hand: Determines whether the hand contains a *
 * straight, a flush, four-of-a-kind, *
 * and/or three-of-a-kind; determines the *
 * number of pairs; stores the results into *
 * the external variables straight, flush, *
 * four, three, and pairs. *
 **********************************************************/
void analyze_hand(int hand[NUM_CARDS][COLS])
{
    int rank, suit;
    straight = false;
    flush = false;
    four = false;
    three = false;
    royal_flush = false;
    ace_low = false;
    pairs = 0;

    /* check for flush */
    int same_suit = 1;
    for (int card = 1, suit = 1; card < NUM_CARDS; card++)
    {
        if (hand[card][suit] == hand[0][suit])
            same_suit++;
    }
    if (same_suit == 5)
        flush = true;

    /* create ranks_array to make it easy to check for royal_flush and straight */
    int ranks_array[NUM_CARDS] = {0};
    for (int i = 0; i < NUM_CARDS; i++)
        ranks_array[i] = hand[i][0];

    sort_array(NUM_CARDS, ranks_array);

    /* check for royal flush and or straight*/
    int concec_rank = 1;
    for (int rank = 0; rank < NUM_CARDS - 1; rank++)
    {
        if (ranks_array[rank] + 1 == ranks_array[rank + 1])
            concec_rank++;
    }

    if (concec_rank == 5) {
        if (ranks_array[0] == 8 && same_suit == 5) {
            royal_flush = true;
        } else {
            straight = true;
        }
        return;
    }

    if (concec_rank == 4 && ranks_array[0] == 0 && ranks_array[NUM_CARDS - 1] == 12) {
        ace_low = true;
        return;
    }
    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    int rank_occurance[NUM_CARDS][COLS];
    for (int i = 0; i < NUM_CARDS; i++)
    {
        rank_occurance[i][0] = 0;
        rank_occurance[i][1] = 0;
    }

    // populate rank_occurance
    int already_seen[NUM_CARDS];
    int unique = 0;
    for (int i = 0; i < NUM_CARDS; i++)
    {
        if (!is_in(ranks_array[i], already_seen, unique))
        {
            rank_occurance[i][0] = ranks_array[i];
            rank_occurance[i][1] = 1;
            already_seen[i] = ranks_array[i];
            unique++;
        }
        else
        {
            for (int j = 0; j < unique; j++)
                if (rank_occurance[j][0] == ranks_array[i])
                    rank_occurance[j][1] += 1;
        }
    }

    for (int i = 0; i < NUM_CARDS; i++)
    {
        if (rank_occurance[i][1] == 4)
            four = true;
        if (rank_occurance[i][1] == 3)
            three = true;
        if (rank_occurance[i][1] == 2)
            pairs++;
    }
}

/**********************************************************
 * print_result: Prints the classification of the hand, *
 * based on the values of the external *
 * variables straight, flush, four, three, *
 * and pairs. *
 **********************************************************/
void print_result(void)
{
    if (royal_flush)
        printf("Royal flush");
    else if (ace_low)
        printf("Ace low");
    else if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three &&
             pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");
    printf("\n\n");
}

/**
 * is_in_array - checks if the row is in the array (collectin of rows)
 *
 * Return: true if found and false otherwise
 */
bool is_in_array(int size, int multiple_rows[size][COLS], int row[COLS])
{
    for (int i = 0; i < size; i++)
    {
        if (multiple_rows[i][0] == row[0] && multiple_rows[i][1] == row[1])
            return true;
    }
    return false;
}

/**
 * sort_array - functino that sorts the array
 */
void sort_array(int size, int sample[size])
{
    int index;
    int largest;
    bool moved = false;

    while (size > 0)
    {
        largest = sample[size - 1];
        for (int i = 0; i < size; i++)
        {
            if (sample[i] > largest)
            {
                index = i;
                largest = sample[i];
                int temp = sample[size - 1];
                sample[size - 1] = largest;
                sample[index] = temp;
            }
        }
        size--;
    }
}

/**
 * is_in - function that checks if element is in the array
 */
bool is_in(int a, int b[], int size)
{
    for (int i = 0; i < size; i++)
        if (b[i] == a)
            return true;

    return false;
}
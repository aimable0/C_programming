#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);
bool in_array(int n, int size, int arr[size]);

/**
 * main - program entry point
 *
 * Return: 0 on success and 1 otherwise
 */
int main(void)
{
    char play_again = 'y';
    int wins = 0, losses = 0;

    srand((unsigned)time(NULL)); // initialize random number generator.

    while (true)
    {
        if (play_game())
        {
            wins++;
            printf("You win!\n\n");
        }
        else
        {
            losses++;
            printf("You lose!\n\n");
        }

        printf("Play again? ");
        scanf(" %c", &play_again); // space to skips whitespace like \n in buffer
        printf("\n");

        if (play_again != 'y' && play_again != 'Y')
            break;
    }

    printf("Wins: %d\tLosses: %d\n\n", wins, losses);
    return 0;
}

/**
 * roll_dice - generate two random numbers (1-6)
 * Accepts no paramenter.
 *
 * Return: sum of two random numbers
 */
int roll_dice(void)
{
    int n1 = 1 + rand() % 6;
    int n2 = 1 + rand() % 6;
    return n1 + n2;
}

/**
 * play_game -
 * Accepts no parameter
 *
 * Return: true if the players wins and false otherwise.
 */
bool play_game(void)
{
    int sum = 0;
    int point = 0;

    // first roll: win and lose immediately
    sum = roll_dice();
    if (in_array(sum, 2, (int[]){7, 11}))
    {
        printf("You rolled: %d\n", sum);
        return true;
    }
    else if (in_array(sum, 3, (int[]){2, 3, 12}))
    {
        printf("You rolled: %d\n", sum);
        return false;
    }

    // store point
    point = sum;
    printf("Your point is %d\n", point);

    // continue rolling until win or loss
    while (sum)
    {
        sum = roll_dice();
        printf("You rolled: %d\n", sum);

        if (sum == 7)
            return false;
        if (sum == point)
            return true;
    }

    return false; // if anythin'. fails.
}

/**
 * in_array - checks whether a number is in a given array
 * @n: number
 * @size: size of array
 * @arr: array
 *
 * Return: true if the number is in array and false otherwise.
 */
bool in_array(int n, int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
            return true;
    }
    return false;
}

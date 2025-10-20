/* Using ** in multidimensional array. */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int teams;
    int tot_scores;

    printf("Enter number of teams: ");
    scanf("%d", &teams);
    printf("Enter number of scores per team: ");
    scanf("%d", &tot_scores);

    int **arr;

    // creating rows
    arr = malloc(teams * sizeof(int *));

    // creating columns
    for (int i = 0; i < teams; i++)
        arr[i] = malloc(tot_scores * sizeof(int));

    for (int i = 0; i < teams; i++)
    {
        printf("Enter scores for team %d: ", i + 1);
        for (int j = 0; j < tot_scores; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // display scores
    for (int i = 0; i < teams; i++)
    {
        printf("Scores for team %d: ", i + 1);
        for (int j = 0; j < tot_scores; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //!\: free memory
    for (int i = 0; i < teams; i++)
    {
        free(arr[i]);
    }

    free(arr);
}
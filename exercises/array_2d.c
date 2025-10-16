#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int score = 0;
    int rows = 3, cols = 4;
    int **arr; // pointer to pointer

    // Step 1: Allocate memory for row pointers
    arr = malloc(rows * sizeof(int *));

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = malloc(cols * sizeof(int));
    }

    // Step 3: Assign values
    for (int i = 0; i < rows; i++)
    {
        printf("Enter scores for team %d: ", i);
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &score);
            arr[i][j] = score;
        }
    }

    // Step 4: Print values
    for (int i = 0; i < rows; i++)
    {
        printf("Scores for team %d: ", i);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < rows; i++)
    {
        free(arr[i]); // free each row
    }
    free(arr); // free row pointers

    return 0;
}
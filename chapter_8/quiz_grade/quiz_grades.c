/* Programming Project that it prompts for five quiz grades for each of five
   students, then computes the total score and average score for each student, and the average
   score, high score, and low score for each quiz
*/

#include <stdio.h>
#define N 5

int main(void)
{
    int five_x_five[N][N] = {0};    // array to store integers in 5 x 5 array
    int row_sum = 0;
    int col_sum = 0;
    int num = 0;    // to hold current digit.

    for (int i = 0; i < N; i++) {
        printf("Student %d grades: ", i + 1);
        for (int m = 0; m < N; m++) {
            scanf("%d", &num);
            five_x_five[i][m] = num;
        }
        printf("\n");
    }

    // row totals - total scores.
    for (int i = 0; i < N; i++) {
        // total score
        printf("Total score of student %d: ", i + 1);
        for (int m = 0; m < N; m++) {
            row_sum += five_x_five[i][m];
        }
        printf("%d, average score: %.2f\n", row_sum, (float) row_sum / N);
        row_sum = 0; // reset row_sum

    }
    printf("\n");

    // Column totals - for each quiz; average_score, highscore, lowscore,

    int high_score = 0;
    int low_score = 0;
    int quiz_total_score = 0;
    for (int i = 0; i < N; i++) {
        for (int m = 0; m < N; m++) {
            // set low score and high score to start with.
            if (m == 0)
                high_score = 0;
                low_score = five_x_five[m][i];

            // get high score.
            if (five_x_five[m][i] > high_score)
                high_score = five_x_five[m][i];

            // get low score
            if (five_x_five[m][i] < low_score)
                low_score = five_x_five[m][i];

            // avg score
            quiz_total_score += five_x_five[m][i];
        }

        printf("Quiz %d high score: %d - low score: %d - avg score: %.2f\n", i + 1, high_score, low_score, ((float) quiz_total_score / N));

        // reset for next col computations.
        high_score = 0;
        low_score = 0;
        quiz_total_score = 0;
    }

    printf("\n");


    return 0;
}
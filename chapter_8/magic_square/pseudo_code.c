/** Final: Pseudo-code for next placing:
 *
 * Step 1 - draft cell:
 *   -> row = row - 1, temp_row = row
 *   -> col = col + 1, temp_col = col
 *
 * Step 2 - check cell of bounds:
 *   -> is row out of bounds ? yes => row = n - 1;
 *   -> is col out of bounds ? yes => col = 0;
 *
 * Step 3 - check cell availability:
 *   -> cell occupied ?
 *        - yes : -> Place right below: - row = temp_row + 2;
 *                                      - col = temp_col - 1;
 *                                      -> Place next number;
 *        - no  : Place next number;
 * */

// drafts - samples..
//  sample #0
// if (!occupied[row][col])
// {
//     array[row][col] = number;
//     occupied[row][col] = true;
// }

// extra draft copies (visualizing)
// step 1 - Start by placing the number 1 in the middle of row 0.
// int middle = 5/2;
// array[0][2] = 1;

// step 2 - Place each of the remaining numbers 2, 3, …, n2 by moving up one row and over one column.
// array[n - 1][3] = 2; //wrap around..
// array[n - 2][4] = 3;
// array[n - 3][n - 5] = 4; // col wrap around..
// array[n - 4][1] = 5; // col wrap around..

// //!\ array[n - 5][2] = 5; // already occupied..
// // in this case: put the number directly below the previously stored number.
// array[2][1] = 6; // right below
// array[1][2] = 7; // right below
// array[0][3] = 8; // right below

// array[n - 1][4] = 9; // right below
// array[n - 2][n - 5] = 10; // right below

// // array[n - 3][n - 4] = 11; // occupied
// // move down the row and same column
// array[n - 1][n - 5] = 11;
// array[(n - 1) -1][1] = 12;
// array[n - 1 - 2][2] = 13;
// array[n - 1 - 3][3] = 14;
// array[n - 1 - 4][4] = 15;

// samples #3
// array[1][0] = 23;
// array[0][1] = 24;

// samples #2
// array[4][0] = 11;
// array[3][1] = 12;
// array[2][2] = 13;
// array[1][3] = 14;
// array[0][4] = 15;

// draft 1
// runs n * n times.

/**
 * q1. true or false
 * q2. 1, 2, 3
 */
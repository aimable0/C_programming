/** PSEUDO CODE FOR SEARCHING AND SORTING
 *
 * 1. search the array to find the largest.
 *  - arr = 1, 4, 5, 8,
 *  - largest = first_element;
 *      --> arr[i] > largest ? yes => largest = arr[i];
 *
 * 2. how do we move it to the end?
 *  --> back_up last element in a temp;
 *  --> replace the largest in the last element position
 *
 * 3. what do I do with the temp ?
 *  --> place the temp in the largest previous position.
 *
 * the above instructions should guarrante having the largest of all at the end.
 *
 *
 * WHAT DO WE DO WITH THE REST ?
 * each time the size of what to sort is getting shorter by 1
 *
 * ex if we had 4 3 2 6
 * the first step would have to go through
 * 4 vs 3
 * 3 vs 2
 * 2 vs 6
 * 3 steps in total and have 6 at the end
 *
 * 4 3 2 6
 * the next step would need to go through 2 since 6 is already the largest
 * 4 vs 3
 * 3 vs 2
 *
 * 2 steps involved and have 4 at as te second last
 * 2 3 4 6
 *
 * we could say that we need n - 1 steps to order place the first largest at the end
 * and each sort makes steps 1 less than the previous sort
 * so steps can control our recursion and as soon as its equal to 1 we stop
 * since n - 1 = steps needed at first and that equal to size of iteration
 * we could use steps as our limiting condition in our loops as well to avoid check integers already placed as last
 *
 *
 *
 *
 */

// Author: N Aimable
// Purpose: A program that test whether two words are anagrams (permutations of same letters)
// Date: 22-Oct-2025

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int word_one[26] = {0};
    int word_two[26] = {0};

    printf("Enter first word: ");
    read_word(word_one);
    printf("Enter second word: ");
    read_word(word_two);

    if (equal_array(word_one, word_two))
    {
        printf("The words are anagrams\n");
    }

    return 0;
}

/**
 * read_word - reads user input and stores character counts in an array.
 * @counts: array of size 26 to store counts of letters 'a' to 'z'.
 *
 * Description:
 * - Each array index corresponds to a lowercase letter:
 *      'a' -> index 0, 'b' -> index 1, ..., 'z' -> index 25.
 * - For each occurrence of a letter, increment counts[letter - 'a'].
 * - Example:
 *      if the letter is 'a', index = 'a' - 'a' = 0
 *      if the letter is 'b', index = 'b' - 'a' = 1
 *
 * Return: Nothing
 */
void read_word(int counts[26])
{
    // catch of a case where residue in a memory address and can lead to uninteded results.
    // char letter;
    // printf("address of letter %p\n", &letter);
    // while (letter != '\n')
    // {
    //     scanf("%c", &letter);
    //     counts[letter - 97] += 1;
    // }
    // if the user enters \n then the letter address will store the \n and check as intended
    // but when the user tries to run the read_word.. the check letter != \n will be equalt to false
    // because although we have appear initialzed char letter in each call ..apparanntly it is given the same memory addres even in the second call..

    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            counts[tolower(ch) - 97] += 1;
    }
    // why is this better:..
    // in this case we run the first call and yes even here ch has the same memory address each call
    // and after the first call ch has \n remaining stored in it
    // but with ch = getchar() we are immediately promption for another character before checking as we did before
    // hence getting the first character from user first on the second call and then comparing it to newline
    // however its still best to initialize it with a value than rely on a resiude which we don't know what's stored in
}

/**
 * equal_array - checks whether two arrays have the same exact elements (are identical)
 * @counts1: array_1
 * @counts2: array_2
 *
 * Return: true if the elements in the two arrays are identical and false otherwise.
 */
bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] != counts2[i])
        {
            printf("The words are not anagrams\n");
            return false;
        }
    }

    return true;
}
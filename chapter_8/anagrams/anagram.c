/* A program that test whether two words are anagrams (permutations of same letters) */
//!\ this program assumes words provided will be only lowecase letters
#include <stdio.h>

int main(void)
{
    // logic we trying to simulate the storage of letters using the asci code
    // for ex if letter is a
    // then we will store a[0] += 1;
    // to get index we will use the logic a[letter - 97] so a - a = index 0, b - a = index 1 ...
    int word_one[26] = {0};
    int word_two[26] = {0};

    printf("Enter first word: ");
    char letter;
    while(letter != '\n') {
        scanf("%c", &letter);
        word_one[letter - 97] += 1;
    }


    // printf("Enter second word: ");
    // char letter_1; // to use on the second word
    // while(letter_1 != '\n') {
    //     scanf("%c", &letter_1);
    //     word_two[letter_1 - 97] += 1;
    // }
    printf("Enter second word: ");
    char letter_1; // to use on the second word
    while(letter_1 != '\n') {
        scanf("%c", &letter_1);
        word_two[letter_1 - 97] += 1;
    }

    for (int i = 0; i < 26; i++){
        if (word_one[i] != word_two[i]) {
            printf("The words are not anagrams\n");
            return 1;
        }
    }
    printf("The words are anagrams\n");

    return 0;
}
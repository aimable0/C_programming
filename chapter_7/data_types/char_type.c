#include <stdio.h>

int main(void)
{

    // CHARACTERS:
    // chars can be signed or unsigned. (they are integer data after all.. no suprise.)
    // printing abcd using numbers
    // printf("\n");
    // for (int i = 97; i < 97 + 25; i++)
    // {
    //     printf("%c ", i);
    // }
    // printf("\n");

    // ESCAPE SEQUENCES.
    // examples of escape sequence.

    // printf("\a");                                 // alert bell
    // printf("Hello\b\b\n");                        // backspace deletes backward one character
    // printf("Urwanda ruzira umwaga: \f1. yego\n"); // form feed: tabs the space that's equal to the string before it.
    // printf("\tUrwanda");
    // printf("\vUrwanda\n");
    // printf("hello\\\n"); // the \\ makes it possible for a string to contain backslash char
    // printf("who are you \?\n");

    // CHARACTER ESCAPES are good but can't help use write/represent characters that are not among the basic 128 ASCII characters.

    // NUMERIC ESCAPES:
    // An octal escape sequence consists of the \ character followed by an octal number with at most three digits.
    //  - octal escape sequence.
    // printf("octal character: \33");
    // printf("\n");
    // Hexadecimal escape sequence: consists of \x followed by hexadecimal number
    // printf("\x1B"); // this \x1B or \x1b removes a character going forward. think of it like 'forwardspace' hhhh

    // NOTE: When used as a character constant, an escape sequence must be enclosed in single quotes

    // char escape = '\\';
    // printf("scape: %c\n", escape); // since the \x1b was printed we should expect first charcter to be removed hence 'cape'

    // note; WE CAN ALSO DEFINE SOME ESCAPE CHARACTERS AT THE TOP ex: #define ESC '\33' .. for ASCII escape character.

    // 2. READING AND WRITING CHARACTERS.

    // -- USING scanf
    // char ch;
    // printf("Enter char: ");
    // scanf("%c", &ch);  // notice that scanf doesn't skip whitespaces for a character match..
    // scanf(" %c", &ch); // this would help use skipp space and get the first character.

    // printf("%c", ch);


    // --  USING getchar and putchar
    // printf("enter another char: ");
    // char userchar = getchar(); // this don't skip white spaces as well so pressing enter (only) .. means the 'newline' is the character stored ..

    // printf("userchar (newline): %c", userchar);
    // printf("here we go.\n"); -- this would go on a newline if a newline character or enter was just the only character passed.

    // printf("first char: %c\n", userchar);

    // NOTE: getchar() returns an int rather than a char..
    // so we might encouter places where the returned value is stored in an int variable.
    // example:
    // printf("enter a new char: ");
    // int chr = getchar(); // this will take the next character in the buffer ..
                         //  so if I passed something like 'ab' to the first getchar() - the next getchar() will automatically store 'b';
                        //  '\n' (Enter) can also be stored as the second getchar's character... if we passed 'a\n'
    // printf("next char: %c -- %d\n", chr, chr);

    // WHAT ELSE CAN getchar() be use for.
    // Display user's string not just a character.
    // char ch;
    // while((ch = getchar()) != '\n') {
    //     printf("%c", ch);
    // }
    // printf("\n");

    // try get chars and ignore all of them until you get s
    // while(getchar() != 's');
    // printf("s pressed\n");
    // from this we can see that getchar is useful in loops thats skips characters as well as loops that search for characters ex: 's' in our example


    // printf("\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

char digit_to_hex(int digit) {
    return "0123456789ABCDEF"[digit];
}

int main(void)
{
    printf("This is a string which realy spans on two "
        "Lines, its cool right?\n");
    printf("I think its better than \
Line continuation\n");

    // String literal subscription
    char *p;
    p = "Aimable";
    char firstletter = p[0];
    printf("My name is %s\n", p);
    printf("My initial is %c\n", firstletter);
    printf("And my second initial is %c\n\n", "Nkurikiyimana"[0]);


    // where would we use this...
    // a funny way to use it..
    int digit;
    printf("Enter a digit to convert to hex: ");
    scanf("%d", &digit);
    printf("hex: %c\n", digit_to_hex(digit));

    // Explore..
    // char *fullname = "Nkurikiyimana Aimable";
    // printf(fullname); // this would also raise errors..


    //  ===== Initializing string variables.. =====

    // = > String vairables = an array of characters.
    char name[8] = "Aimable"; // this can be modified (using []s)
    name[1] = 'D'; // we can do modifications.
    char name_1[] = "Didier"; // This is the best way to do so.
    char name_2[8] = {'A', 'i', 'm', 'a', 'b', 'l', 'e', '\0'};
    // if the initializer was short then extra space is filled. with '\0'

    // We can also use Pointers with String literals.
    char *str = "Aimable";
    // str[1] = 'N'; // this would cause a buserror
    // .. we shouldn't try to modify a string literal.

    printf("%s\n", str);

    // We can however make str point to another string literal.
    str = "Another name";
    printf("%s\n", str);

    // Writing a modifialble string using dynamic memo allocation.
    char *str_1 = malloc(sizeof(char) * 8);
    str_1[0] = 'A'; //! attempting to do this on an initiliazed char p would have resulted into serious error.
    str_1[1] = 'i';
    str_1[2] = 'm';
    str_1[3] = 'a';
    str_1[4] = 'b';
    str_1[5] = '\0';
    str_1[6] = '\0';
    str_1[7] = '\0';

    printf("name is: %s\n", str_1);
    str_1[5] = 'l';
    str_1[6] = 'e';
    printf("name is: %s\n", str_1);
    str_1[6] = 'E';
    printf("name is: %s\n", str_1);

    // Another way ptr can be used with string is by using string variable
    char my_name[] = "Aimable"; // omittin the len is actually a good idea if you don't want to count.
    char *ptr_to_myname = my_name;
    printf("name before modification: %s\n", ptr_to_myname);
    // now we can modify the string.
    ptr_to_myname[1] = 'I';
    ptr_to_myname[2] = 'M';

    printf("name after modification: %s\n", ptr_to_myname);
    return 0;
}

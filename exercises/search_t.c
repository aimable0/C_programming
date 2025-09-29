#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char word[50] = {'a', 'a', 't', 'a', '\0'};
    int found = 0;
    int found_index;
    int i = 0;

    while(word[i] != '\0') {
        if (tolower(word[i]) == 't') {
            found = 1;
            found_index = i;
        }
        i++;
    }

    if (found) {
        if (i % 2 == 0) {
            int first_half = i / 2;
            if (found_index < first_half)   printf("1");
            else    printf("2");
        } else {
            int first_half = (i / 2) + 1;
            if (found_index < first_half)   printf("1");
            else    printf("2");
        }
    } else {
        printf("-1");
    }

    return 0;
}

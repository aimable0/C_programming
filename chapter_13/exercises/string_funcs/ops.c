/* Exploring different functions that operate on strings. */
#include <stdio.h>
#include <string.h>

int main(void)
{
    // different ops we can do with string
    char str1[22];
    char str2[8];
    // strcpy() -> returns the string copied.
    printf("%s\n", strcpy(str1, "Aimable Nkurikiyimana")); // we are able to copy and print what we copied.

    // to copy safely (as much data as can fit in our dest)
    str2[sizeof(str2) - 1] = '\0';
    printf("%s\n", strncpy(str2, str1, sizeof(str2) - 1));

    //strlen
    char str3[10] = "Aimable";
    printf("%lu\n", strlen(str3));
    printf("%lu\n", strlen("Aimable"));
    // strlen returns the length of the string (exluding the \0) stored in the array .. not the array

    // strcat
    char str4[25] = "Nkurikiyimana ";
    strcat(str4, "Sand diego");

    printf("%s\n", str4);
    // strcat(str4, "S"); // this causes Trace/BPT trap: 5 - we tried to write past the dest.

    // srtncat - this terminates the string with null terminator
    strncat(str4, "Sand diego", sizeof(str4) - (strlen(str4)) - 1);
    printf("%s\n", str4);

    strncat(str4, "Sand diego", sizeof(str4) - (strlen(str4)) - 1); // this safer but slower.
    printf("%s\n", str4);

    // Important info (ranges):
    // ASCII: 0-9, A-Z and a-z
    // digits: 48 - 57 (digits start at 48)
    // UppCase: 65 - 90 (uppcase letters start at 65)
    // Lowercase: 97 - 122. (lowcase letter start at 97)
    // Space char: 32
    return 0;
}

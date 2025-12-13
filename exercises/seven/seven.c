#include <stdio.h>
// how do we make a seven segment stuff
void print_digit(int segment[]);

int main(void) {
    // printing with seven segments.
    printf(" --");   printf("   "); printf(" --");
    printf("\n");
    printf("|  |");  printf("  ");  printf("|  |");
    printf("\n");
    printf(" --");   printf("   ");  printf(" --");
    printf("\n");
    printf("|  |");  printf("  ");  printf("|  |");
    printf("\n");
    printf(" --");   printf("   ");  printf(" --");
    printf("\n");


    // original print
    // printf(" --\n");
    // printf("|  |\n");
    // printf(" --\n");
    // printf("   |\n");
    // printf(" -- \n");

    // segment patterns
    const int zero_segs[7]  = {1, 1, 1, 1, 1, 1, 0};
    const int one_segs[7]   = {0, 1, 1};
    const int two_segs[7]   = {1, 1, 0, 1, 1, 0, 1};
    const int three_segs[7] = {1, 1, 1, 1, 0, 0, 1};
    const int four_segs[7]  = {0, 1, 1, 0, 0, 1, 1};
    const int five_segs[7]  = {1, 0, 1, 1, 0, 1, 1};
    const int six_segs[7]   = {1, 0, 1, 1, 1, 1, 1};
    const int seven_segs[7] = {1, 1, 1};
    const int eight_segs[7] = {1, 1, 1, 1, 1, 1, 1};
    const int nine_segs[7]  = {1, 1, 1, 1, 0, 1, 1};

    // try to print some patterns
    // print_digit(one_segs);
    // printf("\n");
    // print_digit(two_segs);
    // printf("\n");
    // print_digit(three_segs);
    // printf("\n");
    // print_digit(four_segs);
    // printf("\n");
    // print_digit(five_segs);
    // printf("\n");
    // print_digit(six_segs);
    // printf("\n");
    // print_digit(seven_segs);
    // printf("\n");
    // print_digit(eight_segs);
    // printf("\n");
    // print_digit(nine_segs);
    return 0;
}

void print_digit(int segment[]) {
    // check/if order.
    // 1. check if index 0 is on/off - print accordingly
    // 2. check if index 5 is on/off        "
    // 3. check if index 1 is on/off        "
    // 4. check if index 6 is on/off        "
    // 5. check if index 4 is on/off        "
    // 6. check if index 2 is on/off        "
    // 7. check if index 3 is on/off        "
    if (segment[0]) printf(" --\n");

    if (segment[5]) printf("|");
    else printf(" ");

    printf("  ");

    if (segment[1]) printf("|");
    printf("\n");

    if (segment[6]) printf(" --");
    printf("\n");
    if (segment[4]) printf("|");
    else printf(" ");
    printf("  ");
    if (segment[2]) printf("|");
    printf("\n");
    if (segment[3]) printf(" --");
    printf("\n");
}

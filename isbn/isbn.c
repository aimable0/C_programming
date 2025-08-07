#include <stdio.h>


int main(void)
{
    int gs1_prefix, g_identifier, pub_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &g_identifier, &pub_code, &item_number, &check_digit);
    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", g_identifier);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
}
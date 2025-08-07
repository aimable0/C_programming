#include <stdio.h>

int main(void)
{
    int item_number, mm, dd, yy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);


    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-2.2d/%-2.2d/%-d\n", item_number, unit_price, mm, dd, yy);


    // // left justified vs right justfied

    // int num1, num2;
    // float  f_num1, f_num2;

    // num1 = 15;
    // num2 = 20;

    // printf("%6.5d\n", num1);   // expected: .00015
    // printf("%5d\n", num2);     // expected: ...20 (right justified)
    // printf("%-5d\n", num2);    // expected: 20... (left justified)
    // hint: think of left just to right just as coming from negative to positive
    // - -> + so -m gives left +m gives right justified (m is minimu field width)
}
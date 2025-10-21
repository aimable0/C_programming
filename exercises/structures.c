#include <stdio.h>
#include <string.h>

typedef struct
{
    // title
    char title[100];
    // author
    char author[50];
    // pages
    int pages;
    // price
    float price;
} Book;

int main(void)
{
    Book myBook_1;
    Book myBook_2;
    Book myBook_3;

    // Book 1
    strcpy(myBook_1.title, "Where am I");
    strcpy(myBook_1.author, "Jimmy Jones");
    myBook_1.pages = 199;
    myBook_1.price = 12.99;

    // Book 2
    strcpy(myBook_2.title, "Who are you");
    strcpy(myBook_2.author, "G Thadee");
    myBook_2.pages = 799;
    myBook_2.price = 35.99;

    // Book 3
    strcpy(myBook_3.title, "Beyond the blues");
    strcpy(myBook_3.title, "J Garrels");
    myBook_3.pages = 299;
    myBook_3.price = 15.99;

    // printing
    printf("Title: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n", myBook_1.title, myBook_1.author, myBook_1.pages, myBook_1.price);
    printf("\n");

    printf("Title: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n", myBook_2.title, myBook_2.author, myBook_2.pages, myBook_2.price);
    printf("\n");

    printf("Title: %s\nAuthor: %s\nPages: %d\nPrice: %.2f\n", myBook_3.title, myBook_3.author, myBook_3.pages, myBook_3.price);

    return 0;
}
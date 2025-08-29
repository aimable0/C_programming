#include <stdio.h>


int main(void)
{
    // int i = 20;
    // int j = 30;
    // float k = 23.4;
    // printf("%d %d\n", i);
    // printf("%f\n", i);   // this false type conversion result into a meaningless value (no what you would expect)
    // printf("%d\n", k);  // this false type conversion result into a meaningless value (no what you would expect)


    // using the minimun field width value to print integers
    // int num = 12345;
    // printf("%6d\n", num);

    // int num2 = 1234567;
    // printf("%6d\n", num2);

    // // sample
    // int num3 = 10;
    // printf("%.1d\n", num3);
    // printf("%.2d\n", num3);

    // using e: displays a floating-point number in exponential format (scientif notation)
    // printf("%.0e\n", 0.3);

    // // using g: which displays floating point number in exponential or fixed decimal

    // // sample 2.
    // int num4 = 9;
    // printf("%10.2d\n", num4); // This uses ex: .10,2 etc (m) characters worth of space. by default .1d => d

    // // sample 3.
    // float num5 = 10.50;
    // printf("%10.1f\n", num5); //this uses 10 (m) character worth of space overall.

    // // sample 4
    // float num6 = 80.5;
    // printf("%10.2e\n", num6);
    // printf("%-10g\n", num6);

    // trying out some escape sequance and chars.
    // escape 1: \n
    // printf("Aimable\n");

    // // escape 2: \a => beep sound (alert)
    // printf("Hello\a\n");

    // // escape3: \t => horizontal tab
    // printf("here is a tab->\tyup!\n");

    // // escape4: \b => backspace -> deletes the character it follows.
    // printf("here is a backspace\byup\n\n");

    // // Let's use the knowledge we got to print a table in one go
    // printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

    // we can even use \ to escape other special characters like " ex \" => implies literal ". or \\ implies literl '\'


    // int x, y, z;

    // printf("Enter numbers(3): ");
    // scanf("%d%d%d", &x, &y, &z);
    // printf("%d %d %d\n", x, y, z);

    // Let's do scnaf with ordinary characters
    // pattern %d/%d

    // int a, b;
    // printf("enter digits: ");
    // scanf("%d/%d", &a, &b);    // This logic of pattern matching can be used for eg: in recieving fraction input ex: 1/2
    // printf("%d %d", a, b);


    // Let's create a hole
    // int c;
    // printf("enter a number: ");
    // scanf("%d\n", &c);   // This is avery bad idea. beacuse scanf will try to match the \n with a character
    // printf("%d \n", c);


    // couple more escapes
    // int profit = 10;
    // printf("Net profit: %d%%\n", profit);


    // let's tesst
    // int h, d = 0;
    // printf("enter 22foo: ");
    // scanf("%d", &d);
    // scanf("%d", &h);
    // printf("h= %d d= %d ", h, d);

    // exercises
    // printf("%-6.2g\n", .0000009979);  //.00


    // exercises
    // int i, j;
    // float x;
    // printf("enter something: ");
    // scanf("%d%f%d", &i, &x, &j);

    // printf("i=%d x=%f  j=%d", i, x, j);

    // exercises
    float a, c;
    int b;
    scanf("%f%d%f", &a, &b, &c);

    printf("%f %d %f", a, b, c);

    return 0;
}


#include <stdio.h>

int main(void)
{
    int a, b, c;
    a = 2;
    b = 3;
    c = 4;

    // q1
    printf("\n");
    printf("%d ", a > b && ++b < c);
    printf("%d %d %d", a, b, c);
    printf("\n");


    // q2
    int x = 0, y = 5;
    printf("%d ", ++x || y-- > 3);
    printf("%d %d", x, y);
    printf("\n");

    // q3
    int p = 1, q = 0, r = 1;
    printf("%d ", (p && q) || (q = r));
    printf("%d %d %d", p, q, r);
    printf("\n");

    // q4
    int m = 4, n = 2;
    printf("%d ", m % n || ++m > n);
    printf("%d %d", m, n);
    printf("\n");

    int i = 0, j = 0, k = 1;
    printf("%d ", ++i && ++j || ++k);
    printf("%d %d %d", i, j, k);
    printf("\n");

    // q6
    a = 5, b = 10, c = 0;
    printf("%d ", (c = a < b) && (b = b - a));
    printf("%d %d %d", a, b, c);
    printf("\n");

    // q7
    i = 3, j = 3;
    printf("%d ", ++i && j++ && ++i);
    printf("%d %d", i, j);
    printf("\n");

    // q8
    x = 2, y = 2;
    int z = 2;
    printf("%d ", (x = y) && (y = z) || (z = x));
    printf("%d %d %d", x, y, z);
    printf("\n");


    a = 0, b = 1, c = 2;
    printf("%d ", a || ++b && c--);
    printf("%d %d %d", a, b, c);    // expected: 1 a=0 b=2 c=1
    printf("\n");

    p = 1, q = 1, r = 0;
    printf("%d ", ++p && (q = r) || ++r);
    printf("%d %d %d", p, q, r);    // expected: 1 2 0 1
    printf("\n");
    printf("\n\n\n");








    printf("\nSection two exercises\n:");
    // section 2
    a = 1, b = 0, c = 5;
    printf("%d ", (a && b) || (b = c));     // Expected: 1 1 5 5
    printf("%d %d %d", a, b, c);
    printf("\n");

    x = 0, y = 4, z = 2;
    printf("%d ", (++x && (y = z)) || (z = y));
    printf("%d %d %d", x, y, z);    // Expected: 1 1 2 2
    printf("\n");

    p = 0, q = 0, r = 1;
    printf("%d ", (p = r) || (q = p) && (r = 0));     // Expected: 1 1 0 1
    printf("%d %d %d", p, q, r);
    printf("\n");

    i = 2, j = 3, k = 0;
    printf("%d ", (i = j) && (j = k) || (k = i));     // Expected: 1 3 0 3(new value)
    printf("%d %d %d", i, j, k);
    printf("\n");

    m = 0, n = 1;
    int o = 1;
    printf("%d ", (m && (n = 0)) || (o = m + n));     // Expected: 1 0 1 1
    printf("%d %d %d", m, n, o);
    printf("\n");



    // super question
    printf("Super question: ");
    a = 1, b = 2, c = 0;
    int d = 3;
    printf("%d ", ++a && (b = c++) || ++d && (c = b++));  //Expected 0 2 1 0 4
    printf("%d %d %d %d", a, b, c, d);
    printf("\n");
    printf("end\n");


    // repeating what I failed
    // from the book
    printf("\n");
    printf("---------------------\n");
    printf("Repeating question I failed in the Book:\n\n");

    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d", i, j, k); // Expected: 1 - all stays the same.
    printf("\n");

    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d", i, j, k); // Expected: 0 all the same
    printf("\n");

    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d", i, j, k);  // Expected: 1 - all the same but i = 8
    printf("\n");

    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k); // Expected: 1 all the same but i which is now 2
    printf("%d %d %d", i, j, k);
    printf("\n");

    printf("---------------------\n");

    printf("\n");

    // last hard challenge for today. (before I take a break)
    // single expression whose value is either -1 or 0 or +1 depending on whether i is < or = or > j
    // let's assume
    // i = 1
    // j = 0
    // proposed: (i >= j) - (i < j) - (i == j) -- chatgpt's logic (i > j) - (i < j)

    // test0: when i < j
    i = 5;
    j = 9;
    printf("when: i < j => %d --- ", (i > j) - (i < j));
    printf("when: i < j => %d\n", (i >= j) - (i < j) - (i == j)); // expected: -1

    // test1: when i eq j
    i = 5;
    j = 5;
    printf("when: i == j => %d --- ", (i > j) - (i < j));
    printf("when: i == j => %d\n", (i >= j) - (i < j) - (i == j)); //expected: 0
    // test2: when i > j
    i = 15;
    j = 5;
    printf("when: i > j => %d --- ", (i > j) - (i < j));
    printf("when: i > j => %d\n", (i >= j) - (i < j) - (i == j));   // expected: +1

    return 0;
}
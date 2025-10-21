
#include <stdio.h>
#define N 10

void check_size(int a[]);

int main(void)
{


    int d = 4;
    // int *p = d; // wrong

    int c[4];
    int *p_c = &c; // c decays to &a[0]


    int b[N];
    // using letter su
    int a[] = {4, 2, 3, 4};
    printf("address of a: %p\n", a); // dacays into a pointer that point to first element of array a same as &a[0] --> int *
    printf("address of &a: %p\n", &a); // point to the whole array block such that &a + 1 would go past the whole array -> int (*)[4]
    printf("address of a[0]: %p\n", &a[0]);
    // printf("address: %p\n", a + 2);
    // printf("address: %p\n", &a);

    // printf("sizeof a: %lu\n", sizeof(a)); // here compiler knows that a is a concrete array and knows its length

    // printf("sizeof a: %lu\n", sizeof(a[0]));

    // how about if they are passed as array parameters
    check_size(a);
    return 0;
}

void check_size(int a[])
{
    // here a decays to pointer of first element of array a.
    // printf("sizeof a: %lu\n", sizeof(a));    // expected 8-bytes // parameter 'a' in this case  is a pointer to array a's first element (int *a)
    // printf("sizeof a: %lu\n", sizeof(a[0])); // expected 4-bytes
    printf("address of a[0]: %p\n", a);
    printf("address of a[0]: %p\n", &a[0]);
}
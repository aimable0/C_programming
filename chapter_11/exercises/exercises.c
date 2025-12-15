#include <stdio.h>

void f(const int *p) {
    int i = 20;
    p = &i; // changing that copy of address has no effect outside this function.
}
int main(void) {
    int j = 23;
    int *k = &j;
    f(k); // copy the address k is pointing to and pass it to f.
    printf("what's stored at k: %d\n", *k);


    // aliases
    int i = 20;
    int *p = &i;
    int *q = &i;
    printf("value: %d\n", *p);
    printf("value: %d\n", *&i);


    // *p = &i; // this produces an error.
    p = *&q; // got to the address &q and get the value stored. there . which is an address.
    


    return 0;
}
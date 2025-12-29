// Exercise:
// Write the following function:
// bool search(const int a[], int n, int key);
// a is an array to be searched, n is the number of elements in the array, and key is the search key.
// search should return true if key matches some element of a, and false if it
// doesn’t. Use pointer arithmetic—not subscripting—to visit array elements.

// Solution.
#include <stdio.h>
#include <stdbool.h>


#define SIZE 5

bool search(const int a[], int n, int key) {
    int *p = a;
    while(p < &a[n]) {
        if (*p++ == key) return true;
    }
    return false;
}

int main(void) {
    int a[SIZE] = {1, 2, 3, 4, 5};
    int key = 6;
    bool found = search(a, SIZE, key);
    printf("%s\n", found == true ? "true" : "false");
}
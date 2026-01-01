#include <stdio.h>
#include <stdbool.h>

#define ROW 7
#define COL 24

int temperatures[ROW][COL];
bool search(int a[ROW][COL], int key);
bool search_v2(const int a[], int n, int key);
void print_readings(int (*a)[COL], int i, int n);
int find_largest(int *a, int n);

int main(void) {


    // exercise:
    // Write a loop that prints the highest temperature in the temperatures array (see Exercise
    // 14) for each day of the week. The loop body should call the find_largest function,
    // passing it one row of the array at a time.

    // solution:
    int i = 0;
    while(i < ROW) {
        int largest = find_largest(temperatures[i], COL);
        printf("Day %d: %d\n", i, largest);
        i++;
    }
}



bool search(int a[ROW][COL], int key) {
    int *p = a[0];
    int *end = p + (ROW * COL);
    while(p < end) {
        if (*p++ == key) return true;
    }
    return false;
}

// more reusable version.
// called search_v2(&temp[0][0], ROW * COL, 32);

bool search_v2(const int a[], int n, int key) {
    while(n-- > 0) {
        if (*a++ == key) return true;
    }
    return false;
}

// exercise
// Write a loop that prints all temperature readings stored in row i of the temperatures
// array (see Exercise 14). Use a pointer to visit each element of the row.
void print_readings(int (*a)[COL], int i, int n) {
    int *p = a[i - 1]; // &a[i][0] => &(*(a + i) + 0) => a[i]
    while(n-- > 0)
        printf("%d ", *p++);
    printf("\n");
}


int find_largest(int *a, int n) {
    int largest = a[0];
    int *ptr_a = a + 1;
    int *end = a + n;

    while(ptr_a < end) {
        if (largest < *ptr_a) {
            largest = *ptr_a;
        }
        ptr_a++;
    }
    return largest;
}

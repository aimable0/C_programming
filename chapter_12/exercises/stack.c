#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 5

// exercises: Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the
// pointer variable top_ptr instead of the integer variable top.

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = &contents[0];


void stack_overflow() {
    printf("Oops, looks like we'eve hit the limit!\n");
    exit(1);
}

void stack_underflow() {
    printf("Oops, looks like we've got nothing in the stack!\n");
    exit(1);
}


void make_empty(void) {
    top_ptr = &contents[0];
}

bool is_empty(void) {
    return top_ptr == &contents[0];
}

bool is_full(void) {
    return top_ptr > &contents[STACK_SIZE - 1];
}

/* C99 only */
void push(int i) {
    if (is_full())
        stack_overflow();
    else
        *top_ptr++ = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return *(--top_ptr);
}


int main(void) {
    // let's test our stack..

    // 1. Add five elements and print them.
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);


    // 2. Try to add t he sixth element.
    printf("nums: ");
    for (int i = 0; i < STACK_SIZE; i++) {
        printf("%d ", contents[i]);
    }
    printf("\n");

    // 3. Make it a empty
    make_empty();
    // 4. Try to remove an element from an empty stack.
    pop();

    return 0;
}

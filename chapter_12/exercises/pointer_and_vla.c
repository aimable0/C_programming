// Exploring VLA's and pointers in C99 (only)
#include <stdio.h>

// OBSERVATION:
// having an array defined with a variable that was not initialized would cause a segmentation fault,
// if the array is defined subsequent to the variable (like next to each other)
// if it was initialized to zero, it would also cause undefined behaviour when you try to add and access element's value.
// even when the variable was changed at runtime.

// safest apprach always initialize the VLA's dependent variable to 1 atleast
// or do not (in code sequence) define VLA until you have initialized its dependent variable.


int main(void) {
    int m = 1; 
    int i = 0;
    // having the code below when m is not initialized to atleast 1 would cause a segmentation fault.
    int a[m]; // placing this declaration here will cause segmentation fault at runtime.
    // because we don;t know what value m really do have.
    // we could have initialized m to 0 if we wanted to to still define a right next to m's declaration

    int *p = a; // point to the first element.

    printf("Enter number of values: ");
    scanf("%d", &m);

    // it could have been way safe to place the definitian of array a here (since at this time the m variable is initialized)

    printf("Enter   values: ");
    while(i < m) {
        scanf("%d", p);
        i++;
        p++;
    }

    p = a; // point to the very first element.

    printf("values entered: ");
    while(i > 0) {
        printf("%d ", *p++);
        i--;
    }

    printf("\nEnd..\n");
    return 0;
}

/* A program that uses array as arguments. */

#include <stdio.h>

// function declaration
int sum_array(int a[], int n); // it's recommended to use parameter names in the prototype and not just the param types
void initialize_with_zeros(int b[], int n);

int main(void)
{
    // arrays are often used as arguments
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_to_be_changed[10];

    // let's print the sum using the sum_array function
    printf("The sum is equal to %d\n", sum_array(numbers, 9));

    initialize_with_zeros(array_to_be_changed, 10);
    // test if array_to_be_changed has been changed.
    for (int i = 0; i < 10; i++)
        printf("%d", array_to_be_changed[i]);
}

// one a function parameter is one dimensional array the array lentght can be left unspecified
int sum_array(int a[], int n)
{
    //!\: we can't use the sizeof(a) / sizeof(a[0]); inside this block.. this wouldn't give us the right answer
    // n will provide us with the length of array if we will need it

    // then we could do something like this..
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    //!\: when dealing with array arguments trying to access a value of element that doesn't exist in array lead to undefined behaviour

    return sum;
}

//!\: its also important to now that array can be modified by functions .. here is an example (remember that other scalar variables like norma int can't be changed..)
void initialize_with_zeros(int b[], int n) {
    for (int i = 0; i < n; i++)
        b[i] = 0;
}

// multi dimensional array ..
// multidimensional array must have atleast the length of the second of dimension of the array when being declared
// ex: int sum_array(int a[][10], int n); .. we can even use a MACRO constant if we want


// USING VLA'S IN FUNCTION THAT HAVE ARRAY ARGUMENTS -C99 (only)
// where we explicitely describe that the length of the arrya is stored in the previously provided variables
// - int f(int n, int a[n])
// - int f(int, int [*]);
// - int f(int n, int a[*]);
//!\ note, however, that this does NO error-checking i.e we still can provide too short or long array length


// COMPOUND LITERALS -C99
// create quickly an array with specifying type and a set of values in {}, and pass it to the function that expects it
// this is useful if you don't plan to use the array anywhere else
// ex: sum = sum_array((int[]){1, 2, 3, 4, 5}, 5);
// defining the length is optional sinc it will be infered from the number of values in the set {}
// a compound literal is an lvalue: they can be changed and have an adress on memory
// they can be made read-only by using const keyword ex: (const int[]){1, 2, 3, 4, 5};

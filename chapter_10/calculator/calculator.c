// Author: N Aimable
// Puprose: Implementing a calculator using Reverse Polish Notation (RPN).
//          with the concept of Stack
// Purpose:
// Date: 14/11/2025

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> /* C99 only */
#define STACK_SIZE 100
/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_underflow();
void stack_overflow();

/* helper function */
bool is_in_array(char a, char array[], int size);

/**
 * main - program's entry point
 *
 * Return: 0 on success.
 *         1 on fail.
 */
int main(void)
{
    char ch = 0;

    printf("Enter an RPN expression: ");
    while (true)
    {
        scanf(" %c", &ch);

        if (ch >= '0' && ch <= '9')
        {
            int digit = ch - 48;
            push(digit);
        }
        else if (is_in_array(ch, (char[]){'+', '-', '*', '/'}, 4))
        {
            int operand_1 = pop();
            int operand_2 = pop();
            int result;

            switch (ch)
            {
            case '+':
                result = operand_1 + operand_2;
                break;
            case '-':
                result = operand_2 - operand_1;
                break;
            case '*':
                result = operand_1 * operand_2;
                break;
            case '/':
                if (operand_1 == 0) {
                    printf("Error: division by zero\n");
                    return 1;
                }
                result = operand_2 / operand_1;
                break;
            }

            push(result);
        } else if (ch == '=') {
            printf("Value of expression: %d\n", contents[0]);
            make_empty();
            printf("Enter an RPN expression: ");
        } else {
            return 1;
        }

    }

    return 0;
}

void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}
int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_underflow()
{
    printf("Not enough operands in expression\n");
    exit(1);
}
void stack_overflow()
{
    printf("Expression is too complex\n");
    exit(1);
}

/* helper function to check if element is in array */
bool is_in_array(char a, char array[], int size)
{
    for (int i = 0; i < size; i++)
        if (array[i] == a)
            return true;

    return false;
}
// Author: N Aimable
// Purpose: The program will offer the user a menu of choices: clear the balance
// balance, credit money to the balance, debit money from the balance, display the
// current balance, and exit the program
// Usage: The choices are represented by the integers 0, 1, 2, 3, and 4, respectively.
// Date: 16/08/2025

#include <stdio.h>

int main(void)
{
    printf("\n----------------  ACME -----------------------------\n");
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit\n");
    printf("3=balance, 4=exit\n\n");

    // program
    int cmd;
    float balance = 0, credit, debit;
    while (1)
    {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
            case 0:
                balance = 0.00f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current Balance: $%.2f\n", balance);
                break;
            case 4:
                printf("\n\n\n Thank you for trusting us! \n");
                printf("----------------  ACME -------------------\n");
                return 0;
            default:
                printf("UsageError: command '%d' not recognized\n", cmd);
                printf("Usage: 0=clear, 1=credit, 2=debit\n");
                printf("3=balance, 4=exit\n\n");
                break;
        }
    }
}
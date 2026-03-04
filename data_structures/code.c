/* A queue: A simulation of a printer work. */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define LIMIT 10
#define CHARS_LIMIT 20

// structures.
typedef struct node{
    char *doc_name;
    struct node *next;
} node;

// prototypes.
bool is_empty(node *head);
node *enqueue(node *n, char[]);
node *dequeue(node *head);
node *print_documents(node *list);
void display_waiting_list(node *list);
void print_dots();

/**
 * main: Entry point
 *
 * Return: 0 on success.
 */

int main(void)
{
    node *head = NULL;
    node *tail = NULL;

    int choice;
    char doc_name[CHARS_LIMIT];
    printf("\n============ SIMULATION OF PRINTER WORK ==========\n\n");

    while(true) {

        printf("1. Add document\n");
        printf("2. View Waiting List\n");
        printf("3. Print Documents\n");
        printf("4. Exit\n");
        printf("Choose operation [1-4]: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter document: ");
                scanf("%s", doc_name);

                if (is_empty(head)) {
                    head = enqueue(head, doc_name);
                    if (head->next == NULL) printf("Added successfully!\n\n");
                    tail = head;
                } else {
                    tail = enqueue(tail, doc_name);
                    if (tail->next == NULL) printf("Added successfully!\n\n");
                }
                break;
            case 2:
                display_waiting_list(head);
                break;
            case 3:
                head = print_documents(head);
                break;
            case 4:
                printf("Byee!\n");
                return 0;
            default:
                printf("Invalid operation\n");
        }
    }
}


// Operations.
bool is_empty(node *head) {
    if (head == NULL) return true;
    return false;
}

node *enqueue(node *n, char doc[]) {
    node *temp = malloc(sizeof(node));

    temp->doc_name = malloc(sizeof(char) * CHARS_LIMIT);
    strcpy(temp->doc_name, doc);
    temp->next = NULL;

    if (is_empty(n))
        n = temp;
        // would this be like saying make n which was initially pointing to where the head is pointing to (in case head was null)
        // point to the same address as temp (without necessarily meanig I make chaning whre head is pointing to)
    else
        n->next = temp;

    return temp;
}

node *dequeue(node *head) {
    node *temp;
    if (head != NULL) {
        temp = head->next;
        free(head);
        return temp;
    } else {
        return NULL;
    }
}


// Helper functions (for simulation)
void display_waiting_list(node *head) {
    if (head != NULL) {
        printf("\nCopies to be printed: \n");
        while(head != NULL) {
            printf("    - %s\n", head->doc_name);
            head = head->next;
        }
        printf("\n");
    } else {
        printf("\nOops Looks like we have no copies to print!\n\n");
    }
}

node *print_documents(node *list) {
    printf("\n=== Simulating printing job ===\n");
    while(list != NULL) {
        printf("Printing doc '%s' ", list->doc_name);
        sleep(1);
        print_dots();
        list = dequeue(list); //dequeue: remove doc from waiting list (FIFO)
    }
    printf("\nAll Printed!\n\n");
    return NULL;
}

void print_dots()
{
    printf("."); fflush(stdout); sleep(1);
    printf("."); fflush(stdout); sleep(1);
    printf("."); fflush(stdout); sleep(1);
    printf(" √\n");
}

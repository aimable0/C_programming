/* A queue: A simulation of a printer work. */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define LIMIT 10
#define CHARS_LIMIT 20

typedef struct node{
    char *doc_name;
    struct node *next;
} node;

// prototypes.
bool is_empty(node *head);
node *enqueue(node *n, char[]);
void dequeue(node *head);
void display_waiting_list(node *list);

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
    char doc[CHARS_LIMIT];
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
                printf("Enter document: ");
                scanf("%s", doc);

                if (is_empty(head)) {
                    tail = enqueue(head, doc);
                } else {
                    tail = enqueue(tail, doc);
                }
                break;
            case 2:
                display_waiting_list(head);
                break;
            case 4:
                printf("Byee!\n");
                return 0;
            default:
                printf("Invalid operation\n");
        }
    }
}


// operations on queue.
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
    else
        n->next = temp;
    return temp;
}

void dequeue(node *head) {
    // implementation here
}


// helper functions (for simulation)
void display_waiting_list(node *head) {
    node *temp = head;
    printf("Copies to be printed: \n");
    printf("\t%s\n", "doc_name");
    while(temp->next != NULL) {
        temp = temp->next;
        printf("\t%s\n", temp->doc_name);
    }
}

void print_documents(node *list) {
    // implementation here
}
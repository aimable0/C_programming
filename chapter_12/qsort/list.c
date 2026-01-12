#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void print_list(node *head);


int main(){
    node *list = NULL;
    node *head = NULL;
    node *temp = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        n->number = i + 1;
        n->next = NULL;

        if (head == NULL)    // first node
        {
            head = n;
            temp = head;
        }
        else             // append after temp
        {
            temp->next = n;
            temp = n;          // move temp to new last node
        }
    }

    print_list(head);


    // not freed yet..
}



void print_list(node *head)
{
    node *current = head;

    while (current != NULL)
    {
        printf("%d ", current->number);
        current = current->next;
    }

    printf("\n");
}



// tmpe to hold node
// create new node
// conne
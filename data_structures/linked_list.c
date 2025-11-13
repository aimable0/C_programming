#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;
    node *head = NULL;
    node *temp = NULL;

    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (i == 0)
        {
            head = n;
            temp = head;
        }
        if (i > 0) {
            temp = temp->next;
            temp->next = n;
        }
        n->number = i + 1;
        n->next = NULL;
    }

    // how could we print it ?
    node *ptr = head;
    for (int i = 0; i < 4; i++)
    {
        printf("number at index[%d]: %d\n", i, ptr->number);
        ptr = ptr->next;
    }

    // what are we trying to do ?? -- do that in parts..

    // node *n = malloc(sizeof(node));
    // n->number = 0;
    // n->next = NULL;

    // list = n;

    // list->next = malloc(sizeof(node));
    // list->number = 4;
    // list->next = NULL;

    // list->next = malloc(sizeof(node));
    // list->next->number = 3;
    // list->next->next = NULL;

    // list->next = malloc(sizeof(node));
    // list->next->number = 3;
    // list->next->next = NULL;

    // node *address = list->next;

    // printf("address: %p\n", list->next);
    // printf("address: %p\n", address);

    // printf("number: %d\n", list->number);
    // printf("number: %d\n",address->number);

    // list = malloc(sizeof(node));
    // list->number = 4;
    // list->next = NULL;

    // list->next = malloc(sizeof(node));
    // list->next->number = 3;
    // list->next->next = NULL;

    // list->next->next = malloc(sizeof(node));
    // list->next->next->number = 2;
    // list->next->next->next = NULL;

    // list->next->next->next = malloc(sizeof(node));
    // list->next->next->next->number = 1;
    // list->next->next->next->next = NULL;

    // list->next->next->next->next = malloc(sizeof(node));
    // list->next->next->next->next->number = 0;
    // list->next->next->next->next->next = NULL;

    // printf("Number at: %d - %d\n", 0, list->number);
    // printf("Number at: %d - %d\n", 1, list->next->number);
    // printf("Number at: %d - %d\n", 2, list->next->next->number);
    // printf("Number at: %d - %d\n", 3, list->next->next->next->number);
    // printf("Number at: %d - %d\n", 4, list->next->next->next->next->number);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Number at index[%d] =  %d\n", i, list[i].number);
    // }
}
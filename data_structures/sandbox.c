#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include <time.h>



typedef struct node {
    char *name;
    struct node *next;
} node;

int main(void)
{
    node *head = NULL;
    node *temp = malloc(sizeof(node));
    temp->name = malloc(sizeof(char) * 20);
    strcpy(temp->name, "Aimable");
    temp->next = NULL;
    head = temp;

    printf("\t%s\n", head->name);

    printf("Printing doc '%s' ", temp->name);
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(" √\n");


    struct timespec ts;
    ts.tv_sec = 1;        // seconds
    ts.tv_nsec = 0;       // nanoseconds
    nanosleep(&ts, NULL);

    // printf("Printing doc '%s' ", temp->name);
    nanosleep(&ts, NULL);
    printf(".");
    fflush(stdout);
    nanosleep(&ts, NULL);
    printf(".");
    fflush(stdout);
    nanosleep(&ts, NULL);
    printf(".");
    fflush(stdout);
    nanosleep(&ts, NULL);
    // printf(" √\n");

}

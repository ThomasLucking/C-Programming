#include <stdio.h>
#include <stdlib.h>

// declares a new struct
struct Node{
    int value; // value
    struct Node *next; // pointer for the next node.
    struct Node *prev; // pointer for the previous node.
};

int main()
{
    struct Node *node1 = malloc(sizeof(struct Node)); 
    struct Node *node2 = malloc(sizeof(struct Node));

    node1->value = 15;
    node2->value = 20;
    node1->next = node2;
    node2->prev = node1;

    printf("%d", node1->next->value);         
    printf("%d", node2->prev->value);           
    free(node1); 
    free(node2);                                     


    return 0;
}
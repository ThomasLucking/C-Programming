#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char* value;
    struct Node *next; 
    struct Node *prev;

  
};

struct Node *insert(char *value, struct Node **head){
    struct Node *node1 = malloc(sizeof(struct Node)); 
    node1->next = *head;
    node1->value = value;
    node1->prev = NULL;

    if(*head != NULL){
        (*head)->prev = node1;
    }
    *head = node1;
    
    return node1;

}


int main(){

    struct Node *head = NULL;
    insert("Hello world", &head);
    insert("Hello world", &head);
    insert("Hello world", &head);
    insert("Hello world", &head);

    struct Node *temp = head;
    while(temp != NULL){
        printf("%s", temp->value);
        temp = temp->next;

    }

}

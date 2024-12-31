#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *nextpointer;
};

void linkedlisttraversal(struct Node * pointer){

    while(pointer != NULL){
        printf("Elements are: %d\n", pointer->data);
        pointer= pointer->nextpointer;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *begin;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct  Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    begin=(struct Node*)malloc(sizeof(struct Node));

    // Add elements to first node and link first and second node
    head->data=21;
    head->nextpointer=second;

    // Linking second and third node
    second->data=14;
    second->nextpointer=third;

    // Linking third and fourth node
    third->data=25;
    third->nextpointer=fourth;

    // Terminating the last node
    fourth ->data=58;
    fourth->nextpointer=NULL;

    // Insertion at the beginning
    begin->data = 1;
    begin->nextpointer=head;

    linkedlisttraversal(begin);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *nextpointing;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data=15;
    head->nextpointing=second;

    second->data=25;
    second->nextpointing=third;

    third->data=20;
    third->nextpointing=fourth;

    fourth->data=65;
    fourth->nextpointing=NULL;

     printElements(head);

    return 1;

}
void printElements(struct Node *pointing)
{
    while (pointing != NULL)
    {
        printf("Elements are%d",pointing->data);
        pointing=pointing->nextpointing;
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char *song[25];
    struct node * next;
}; typedef struct node* NODEPTR;

NODEPTR head=NULL;
NODEPTR temp;
 
void CreatePlaylist()
{
    NODEPTR newnode = (NODEPTR)malloc(sizeof(struct node));
    // printf("Enter the song");
    scanf("%s",&newnode->song);

    if (head == NULL)
    {
        temp=head=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next = temp->next;
        temp->next= newnode;
        newnode->next=NULL;
    }
    temp = newnode;
    
}

int main()
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the song name:");
        CreatePlaylist();
    }
    return 0;
    
}
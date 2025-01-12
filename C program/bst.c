#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};
typedef struct node* NODEPTR;
NODEPTR root = NULL;

NODEPTR createbst()
{
    NODEPTR temp;
    temp = (NODEPTR)malloc(sizeof(struct node));
    int data;
    printf("Enter the data and press -1 for no node");
    scanf("%d",&data);
    if (data == -1)
    {
        return NULL;
    }

    temp->data = data;
    printf("Enter for Left child of present node:\n");
    temp->left = createbst();
    printf("Enter for the Right child of present node:\n");
    temp->right= createbst();

    return temp;
    
}

int main()
{
    root = createbst();
    return 0;
}



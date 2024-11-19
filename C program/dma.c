#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d", &n);

    int *arr=(int *)malloc(n*sizeof(int));

    printf("Enter the values of array");
    for(i=0; i<n; i++)
    {
        // Two different ways of accepting value
        // scanf("%d", &arr[i]);
        scanf("%d",(arr+i));
    }

    for(i=0; i<n; i++)
    {
        // Two different ways of printing values
       printf("%d",arr[i]);
       printf("%d",*(arr+i));
    }
}
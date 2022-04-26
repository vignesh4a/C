//Write a C program to find the index of an array element.

#include<stdio.h>
int index_arr[100]; 

int *ind(int N, int *arr,int val)
{
    int i=0;
    int count=0;


    for(i=0;i<N;i++)
    {
        if(arr[i]==val)
        {
            index_arr[++count] = i;
        }
    }
    index_arr[0] = count;

    return index_arr;
}

void main()
{
    int N;
    int i;
    int arr[100];
    int *temp;
    int val;

    printf("Enter the array size : ");
    scanf("%d",&N);

    printf("Enter the array elemets\n");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("Enter value to find index : ");
    scanf("%d",&val);
    
    temp = ind(N,arr,val);

    if(temp[0])
    {
        printf("%d is present at index :> ",val);
        
        for(i=1;i<temp[0]+1;i++)
        {
            printf("%d ",temp[i]);
        }
    }
    else
        printf("Value Not found");

    
}
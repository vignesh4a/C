//Write a C program to test if an array contains a specific value.

#include<stdio.h>


int is_present(int N,int *arr,int val)
{
    int i;

    for(i=0;i<N;i++)
    {
        if(val==arr[i])
            return 1;
    }
    return 0;
}

void main()
{
    int i;
    int N;
    int arr[100];
    int val;

    printf("Enter size of array : ");
    scanf("%d",&N);

    printf("Enter array elemetns\n");
    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter value to check : ");
    scanf("%d",&val);


    printf("%d is%sPresent in given array",val,(is_present(N,arr,val))?" ":" not ");
    
}
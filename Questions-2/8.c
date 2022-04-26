//Write a C program to remove duplicate elements from an array.

#include<stdio.h>




void pop(int *arr,int *size,int index)
{
    int i;
    (*size)--;
    for(i=index;i<*size;i++)
    {
        arr[i] = arr[i+1];
    }
}

int remdup(int *arr, int *size)
{
    int i;
    int j;
    int k;

    for(i=0;i<*size-1;i++)
    {
        for(j=i+1;j<*size;j++)
        {
            if(arr[i]==arr[j])
            {
                pop(arr,size,j);
                j--;
            }
        }
    }
    
}



void main()
{
    int a[100];
    int N;
    int i;

    printf("Enter size of array : ");
    scanf("%d",&N);
    
    printf("Enter Array Elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);

    

    printf("\n\n\n         Original Array >> [ ");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("]\n");

    remdup(a,&N);

    printf("Duplicate removed Array >> [ ");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("]\n\n\n");



}
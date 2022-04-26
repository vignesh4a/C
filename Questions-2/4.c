//Write a C program to find the duplicate values of an array of integer values.

#include<stdio.h>
#include<stdlib.h>

unsigned int count(int *arr,unsigned int size, int val)     // return repeated numbers
{
    unsigned int temp=0;

    while(size--)
        if(arr[size] == val)
            temp++;
    
    return temp;
}



void duplicate(int *arr,unsigned int size)
{
    unsigned int i,j;
    int temp;

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    j=0;

    printf("Duplicate elements are\n [ ");

    for(i=0;i<size;i+=j)
    {
        j = count(arr,size,arr[i]);
        if(j>1)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("]\n");

}

int main()
{
    unsigned int size;
    int *arr;
    unsigned int i;


    printf("Enter the size of array : ");
    scanf("%i",&size);

    arr = (int *)malloc(sizeof(int)*size);
    
    if(arr==NULL)
    {
        printf("Error\n");
        return 0;
    }

    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);


    duplicate(arr,size);

    free(arr);

    return 0;
    
}
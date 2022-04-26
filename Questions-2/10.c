//Write a C program to find the second smallest element in an array.

#include<stdio.h>

int ssmlst(int *arr,int size)
{
    int i = size;
    int sml = arr[0];
    int ssml = arr[0];

    while(i--)              //smallest
    {
        if(arr[i]<sml)
        {
            sml = arr[i];
        }
    }
i = size;
     for(i=1;i<size;i++)           // 2nd smallest
    {
        if(arr[i]>sml && ssml>arr[i])
        {
            ssml = arr[i];
        }
    }

    return ssml;
}


int  main()
{
    int arr[100];
    int size;
    int i;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Second smallest = %d",ssmlst(arr,size));
}

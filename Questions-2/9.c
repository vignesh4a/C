//Write a C program to find the second largest element in an array.

#include<stdio.h>

int slarge(int *arr,int size)
{
    int i = size;
    int lrg = arr[0];
    int slrg = arr[0];

    while(i--)              //largest
    {
        if(arr[i]>lrg)
        {
            lrg = arr[i];
        }
    }
i = size;
     while(i--)            // 2nd largest
    {
        if(arr[i]<lrg && arr[i]>slrg)
        {
            slrg = arr[i];
        }
    }


    return slrg;
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

    printf("Second largest = %d",slarge(arr,size));
}

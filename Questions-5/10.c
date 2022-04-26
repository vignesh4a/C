/*
Write a C program to arrange the elements of a given array of integers
where all negative integers appear before all the positive integers.
*/
#include<stdio.h>

void main()
{
    int arr[100];
    int arr1[100];
    int i,size;
    int count = 0;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);


    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
            arr1[count++] = arr[i];
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]>=0)
            arr1[count++] = arr[i];
    }

    for(i=0;i<size;i++)
        printf("%d ",arr1[i]);



}

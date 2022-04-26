/*
Write a C program to find the smallest and second
smallest elements of a given array.
*/
#include<stdio.h>

void main()
{
    int arr[100];
    int i,j,size;
    int small;
    int ssmall;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    //i = (arr[1]>arr[0]?1:0);
    small = arr[0];
    ssmall = arr[0];

    for(i=2;i<size;i++)
    {
        if(small>arr[i])
            small = arr[i];
        if(ssmall>arr[i] && small<arr[i])
            ssmall = arr[i];
    }

    printf("Smallest = %d\nSecond Smallest = %d",small,ssmall);

}

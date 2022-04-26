/*
 Write a C program to cyclically rotate a given array clockwise by one.
*/

#include<stdio.h>

void main()
{
    int arr[100];
    int i,size;
    int temp =0;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    temp = arr[size-1];
    for(i=size-1;i>0;i--)
        arr[i] = arr[i-1];
    arr[i] = temp;

    printf("Rotated array \n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

}

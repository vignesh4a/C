/*
  Write a C program to find the rotation count in
   a given rotated sorted array of integers.
*/

#include<stdio.h>

void main()
{
    int arr[100];
    int i,size;
    int temp =0;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter rotated sorted array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp=i+1;
            break;
        }
    }

    printf("Rotated %d times clockwise\n",temp);
}

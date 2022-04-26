/*
1.     Write a C program to print all the LEADERS in the array.
Note: An element is leader if it is greater than all the elements to its right side.
*/

#include<stdio.h>

void main()
{
    int arr[100];
    int i,size;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);


    printf("LEADERS \n");
    printf("[ ");
    for(i=0;i<size-1;i++)
        if(arr[i]>arr[i+1])
            printf("%d, ",arr[i]);
    printf("]");
}

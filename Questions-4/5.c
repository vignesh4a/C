/*
Write a C program to find the sum of the two elements of a given array which is equal to a given integer.
Sample array: [1,2,4,5,6]
Target value: 6.
*/

#include<stdio.h>

void main()
{
    int arr[100];
    int size;
    int i,j;
    int target;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter target value = ");
    scanf("%d",&target);

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
                printf("%d + %d = %d \n",arr[i],arr[j],target);
        }
    }
}


//Write a C program to copy an array by iterating the array.

#include<stdio.h>

void acpy(int N,int *a1, int*a2)
{
    int i;
    for(i=0;i<N;i++)
    {
        a2[i] = a1[i];
    }
}

void main()
{
    int i;
    int N;
    int arr1[100];
    int arr2[100];

    printf("Enter array size : ");
    scanf("%d",&N);

    printf("Enter array 1 elements \n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr1[i]);
    }

    acpy(N,arr1,arr2);

    printf("Array 2 elements \n");
    for(i=0;i<N;i++)
    {
        printf("%d ",arr2[i]);
    }
}
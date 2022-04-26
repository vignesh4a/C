/*
  Write a C program to check whether there is a pair with a specified sum of a given sorted and rotated array.
*/

#include<stdio.h>

int Ispresent(int *arr,int size,int val)
{
    int i,j;

    for(i=0;i<size-1;i++)
    {
      for(j=i;j<size;j++)
      {
        if(arr[i]+arr[j] == val)
          return 1;
      }
    }

    return 0;
}

void main()
{
    int arr[100];
    int i,size;
    int sum = 0;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter Sum : ");
    scanf("%d",&sum);

    printf("Pair with sum %d is %sPresent",sum,(Ispresent(arr,size,sum))?"":"Not ");

}

/*
 Write a C program to segregate all 0s on the left side and all 1s
  on the right side of a given array of 0s and 1s.
*/
#include<stdio.h>


void main()
{
    int arr[100];
    int temparr[100] = {0};
    int i,size;
    int count =0;

    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<size;i++)
    {
        count+=(arr[i]==1);
    }
    for(i=0;i<count;i++)
        temparr[i] = 1;

    for(i=0;i<size;i++)
        printf("%d ",temparr[i]);
}


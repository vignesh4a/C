/*
Write a C program to find all the unique triplets such that sum of all the three elements [x, y, z (x <= y <= z)] equal to a specified number.
Sample array: [1, -2, 0, 5, -1, -4]
Target value: 2.
*/

#include<stdio.h>

void main()
{
    int arr[100];
    int size;
    int i,j,k;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);


    for(i=0;i<size-2;i++)
    {
        for(j=i+1;j<size-1;j++)
        {
            for(k=j+1;k<size;k++)
            {
                if(arr[i]<= arr[j] && arr[j] <= arr[k])
                    printf("%d <= %d <= %d \n",arr[i],arr[j],arr[k]);
            }
        }
    }
}

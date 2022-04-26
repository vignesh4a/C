/*
 Write a C program to find all combinations of four elements of a
 given array whose sum is equal to a given value.
*/
#include<stdio.h>

void main()
{
    int arr[100];
    int sum;
    int i,j,k,l,size;

    printf("Enter the array size : ");
        scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter the sum : ");
        scanf("%d",&sum);

    for(i=0;i<size-3;i++)
    {
        for(j=i+1;j<size-2;j++)
        {
            for(k=j+1;k<size-1;k++)
            {
                for(l=k+1;l<size;l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l] == sum)
                    {
                        printf("%d + %d + %d + %d = %d\n",arr[i],arr[j],arr[k],arr[l],sum);
                    }
                }
            }
        }
    }

}

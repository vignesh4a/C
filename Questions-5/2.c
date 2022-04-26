/*
Write a C program to find the two elements from a given array
of positive and negative numbers such that their sum is closest to zero.
*/

#include<stdio.h>

int abs(int val)
{
    if(val<0)
        return val*-1;
    return val;
}

void main()
{
    int arr[100];
    int i,j,size;
    int nearest = 0;
    int ele[2];
    printf("Enter the array size : ");
    scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    nearest = abs(arr[1]+arr[0]);
    ele[0] = arr[0];
    ele[1] = arr[1];

    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(abs(arr[i]+arr[j])<nearest)
            {
                nearest = abs(arr[i]+arr[j]);
                ele[1] = arr[i];
                ele[0] = arr[j];
            }

        }
    }

    printf("Sum of %d %d is Nearest to Zero",ele[0],ele[1]);

}

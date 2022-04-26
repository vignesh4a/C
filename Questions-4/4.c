/*
Write a C program to find the length of the longest consecutive elements sequence from a given unsorted array of integers.

Sample array: [49, 1, 3, 200, 2, 4, 70, 5]
The longest consecutive elements sequence is [1, 2, 3, 4, 5], therefore the program will return its length 5.

*/

#include<stdio.h>


int longcons(int *arr,int size)
{
    int i,j;
    int temp;
    int start;
    int longest;

    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    start=0;
    longest=0;
    for(i=1;i<size;i++)
        if(arr[i-1]+1 == arr[i])
            longest = (i-start)+1>longest?i-start+1:longest;
        else
            start = i;

    return longest;
}


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


    printf("= %d",longcons(arr,size));
}

/*
Write a C program to remove the duplicate elements of a given array and return the new length of the array.
Sample array: [20, 20, 30, 40, 50, 50, 50]
After removing the duplicate elements the program should return 4 as the new length of the array.

*/

#include<stdio.h>

int isPresent(int *arr,int size,int val)
{
    int i;
    for(i=0;i<size;i++)
        if(val==arr[i])
            return 1;
    return 0;
}

int remdup(int *arr,int size)
{
    int i=0;
    int temp[size];
    int sizeb=0;
    for(i=0;i<size;i++)
    {
        if(isPresent(temp,sizeb,arr[i])==0)
        {
            temp[sizeb] = arr[i];
            sizeb++;
        }
    }
    return sizeb;
}

void main()
{
    int arr[100];
    int size;
    int i;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("%d",remdup(arr,size));

}

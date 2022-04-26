/* 
    Write a C program to find all pairs of elements in an array whose 
    sum is equal to a specified number.
*/

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>

int main()
{
    int arr[100],size;
    int i,j,val;

    printf("Enter the size of array : ");
    scanf("%d",&size);

   

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter the Value : ");
    scanf("%d",&val);

    printf("[ ");
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j] == val)
              printf("( %d ,%d ) ",arr[i],arr[j]);  
        }
    }
    printf("]");
    return 0;
}
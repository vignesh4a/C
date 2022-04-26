// Write a C program to test the equality of two arrays.

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>

int areEqual(int *arr1, int *arr2, int N1 , int N2)
{
    if(N1 != N2)
        return 0;

    int i;

    for(i=0;i<N1;i++)
        if(arr1[i] != arr2[i])
            return 0;

    return 1;
}

int main()
{
    int arr1[100],arr2[100];
    int i,N1,N2;

    printf("Enter the size of array 1 : ");
    scanf("%d",&N1);

    printf("Enter the array 1 elements\n");
    for(i=0;i<N1;i++)
        scanf("%d",&arr1[i]);

    printf("Enter the size of array 2 : ");
    scanf("%d",&N2);

    printf("Enter the array 2 elements\n");
    for(i=0;i<N2;i++)
        scanf("%d",&arr2[i]);

    printf(">> %s\n",(areEqual(arr1,arr2,N1,N2))?"Equal":"Not Equal");

    return 0;
}
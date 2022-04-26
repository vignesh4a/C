// Write a C program to find the common elements between two arrays of integers.

#include<stdio.h>

int is_present(int *arr,int val,int N1)
{
    int i=0;
    
    for(i=0;i<N1;i++)
        if(arr[i]==val)
            return 1;
    
    return 0;
}

void com(int *arr1,int N1,int *arr2,int N2)
{
    int i=0;

    printf("Common Elements are\n");
    
    printf("[ ");
    for(i=0;i<N2;i++)
    {
        if(is_present(arr1,arr2[i],N1))
            printf("%d, ",arr2[i]);
    }
    printf("]");
}

void main()
{
    int a[100];
    int b[100];
    int N1;
    int N2;
    int i;

    printf("Enter array1 size : ");
    scanf("%d",&N1);

    printf("Enter array2 size : ");
    scanf("%d",&N2);

    printf("Enter array1 elements\n");
    for(i=0;i<N1;i++)
        scanf("%d",&a[i]);

    printf("Enter array2 elements\n");
    for(i=0;i<N2;i++)
        scanf("%d",&b[i]);
    

    com(a,N1,b,N2);
}

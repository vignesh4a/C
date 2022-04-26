//Write a C program to check if an array of integers without 0 and -1.
/*
 Name : Vignesh Uday Hegde
 USN : 4CB18EC087
*/
#include<stdio.h>

int contain(int *arr, int N )
{
    int i;
    int z=0;
    int n=0;

    for(i=0;i<N;i++)
    {
        if(arr[i]==0)
            z = 1;
        else if(arr[i]==-1)
            n = 2;

        if(n&&z)
            break;
    }

    return z+n;
}

int main()
{
        int a[20];
    int N;
    int i;

    printf("Enter size of array :");
    scanf("%d",&N);
    
    printf("Enter the array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    
    

    switch (contain(a,N))
    {
    case 0:printf("Array contain nither 0 nor -1\n");
            break;
    case 1:printf("Array contain 0 \n");
            break;
    case 2:printf("Array contain -1\n");
            break;
    case 3:printf("Array contain 0 and -1\n");
            break;
    default: printf("Error occured\n");
        break;
    }

    return 0;
}
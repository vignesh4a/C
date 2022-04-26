//Write a C program to compute the average value of an array of integers except the largest and smallest values.

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>

int min(int *arr, int size)
{
    int temp = arr[0];
    int i;
    
    for(i=1;i<size;i++)
        if(arr[i]<temp)
            temp = arr[i];

    return temp;
}

int max(int *arr, int size)
{
    int temp = arr[0];
    int i;
    
    for(i=1;i<size;i++)
        if(arr[i]>temp)
            temp = arr[i];

    return temp;
}

float calc(int *arr, int size)
{
    int i,deno=0,num=0;
    int mi = min(arr,size);
    int ma = max(arr,size);

    for(i=0;i<size;i++)
    {
        if(arr[i]!=mi && arr[i]!=ma)
        {
            deno += 1;
            num += arr[i];
        } 
    }

    return (deno>0)?((float)num/(float)deno):0;
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

    printf("= %0.3f ",calc(a,N));
}


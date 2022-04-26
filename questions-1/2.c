// Write a C program to sum values of an array.

#include<stdio.h>

float sum(int N,float *arr)
{
    int i;
    float sum=0;

    for(i=0;i<N;i++)
        sum+=arr[i];
    
    return sum;
}

void main()
{
    int i;
    int N;
    float arr[100];

    printf("Enter the size of array : ");
    scanf("%d",&N);
    
    printf("Enter the array elements\n");
    for(i=0;i<N;i++)
        scanf("%f",&arr[i]);

    printf("Sum = %f",sum(N,arr));

}
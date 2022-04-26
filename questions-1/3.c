// Write a C program to calculate the average value of array elements.

#include<stdio.h>

float avg(int N,float *arr)
{
    int i;
    float sum=0;

    for(i=0;i<N;i++)
        sum+=arr[i];

    return sum/(float)N;
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

    printf("Average = %.3f",avg(N,arr));

}
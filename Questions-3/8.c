/*
    Write a C program to get the difference between the 
    largest and smallest values in an array of integers. 
    The length of the array must be 1 and above.
*/

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


int main()
{
     int a[20];
     int N;
     int i;
     int flag = 1;

     while(flag)
     {
         printf("Enter size of array :");
         scanf("%d",&N);
         flag = (N>0)?0:printf("Entered value is less than 1 try again\n");
     }
     
    printf("Enter the array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);


     printf("Difference between the largest and smallest values \n => %d",max(a,N)-min(a,N));

    return 0;
}
// Write a C program to find a missing number in an array.

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

    // assuming diff between numbers is 1
    for(i=0;i<size-1;i++)
        if(arr[i]+1 != arr[i+1])
        {
            printf("%d is missing\n",arr[i]+1);
            i = 2*size;
        }
            
    if(i<2*size)
        printf("No missing number\n");
     
    return 0;
}
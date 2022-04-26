// Write a C program to find the number of even and odd integers in a given array of integers.

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>


int main()
{
    int a[20];
    int N;
    int i;
    int even=0,odd=0;

    printf("Enter size of array :");
    scanf("%d",&N);
    
    printf("Enter the array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);

    for(i=0;i<N;i++)
        (a[i]%2)?odd++:even++;

    printf("Even = %d\nOdd = %d",even,odd);

    return 0;
}
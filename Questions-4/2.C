/*
Write a C program to check if an array of integers contains two specified elements 65 and 77.
*/

#include<stdio.h>

int contains(int *arr,int size,int a,int b)
{
    int tempa=0;
    int tempb=0;
    int i;

    for(i=0;i<size;i++)
    {
        if(arr[i]==a)
            tempa = 1;

        else if(arr[i]==b)
            tempb = 1;
    }
    return (tempa+tempb)==2;
}

int main()
{
    int arr[100];
    int size;
    int i;
    int a = 65;
    int b = 77;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("%s",contains(arr,size,a,b)?"true":"false");

}

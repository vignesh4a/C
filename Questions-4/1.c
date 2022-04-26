/*
1) Write a C program to check if the sum of all the 10's in the array is exactly 30.
Return false if the condition does not satisfy, otherwise true
*/

#include<stdio.h>
#include<stdbool.h>

bool sumTen(int *arr,int size)
{
    int i;
    int temp=0;

    for(i=0;i<size;i++)
    {
        if(arr[i]==10)
        {
            temp+=10;
        }
    }

    return (temp==30)?true:false;
}

void main()
{
    int arr[100];
    int size;
    int i;
    int temp;

    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("%s",sumTen(arr,size)?"true":"false");

}

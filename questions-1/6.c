//Write a C program to remove a specific element from an array

#include<stdio.h>
int N;

void rmv(int val,int *arr)
{
    int i,j;

    for(i=0;i<N;i++)
    {
        if(val==arr[i])
        {
            for(j=i;j<N;j++)
            {
                arr[j]=arr[j+1];
            }
            i--;
            N--;
        }
    }
}
void main()
{
    int i;
    int arr[100];
    int val;

    printf("Enter array size : ");
    scanf("%d",&N);

    printf("Enter array elements \n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to remove : ");
    scanf("%d",&val);

    rmv(val,arr);

    printf("After removing %d from array \n",val);
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }

}
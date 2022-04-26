// Write a C program to move all 0's to the end of an array. Maintain the relative order of the other (non-zero) array elements

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>

int main()
{
    int a[20];
    int N;
    int i,j;
    int temp; 
    int val_to_mov = 1;

    printf("Enter size of array :");
    scanf("%d",&N);
    
    printf("Enter the array elements\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    
    temp = N;

    for(i=0;i<temp;i++)
    {
        if(a[i]==val_to_mov)
        {
            for(j=i;j<temp-1;j++)
            {
                a[j] = a[j+1];
            }
            a[j] = val_to_mov;
            i--;
            temp--;
        }
    }

    for(i=0;i<N;i++)
        printf("%d ",a[i]);

}
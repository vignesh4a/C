/*
  Write a C program to count the number of possible triangles from a
  given unsorted array of positive integers.
Note: The triangle inequality states that the sum of the
lengths of any two sides of a triangle must be greater than or equal to the length of the third side.

*/

#include<stdio.h>

short int isTri(int a,int b,int c)
{
    if(a+b <= c)
        return 1;
    else if(b+c <= a)
        return 1;
    else if(c+a <= b)
        return 1;
    return 0;
}

void main()
{
    int arr[100];
    int sum;
    int i,j,k,l,size;

    printf("Enter the array size : ");
        scanf("%d",&size);

    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

     for(j=0;j<size-2;j++)
    {
        for(k=j+1;k<size-1;k++)
        {
            for(l=k+1;l<size;l++)
            {
                if(isTri(arr[j],arr[k],arr[l]))
                {
                    printf("%d %d %d\n",arr[j],arr[k],arr[l]);
                }
            }
        }
    }
}

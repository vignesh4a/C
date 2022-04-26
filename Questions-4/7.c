/*
Write a C program to create an array of its anti-diagonals from a given square matrix.
Example:Input : 1 2
                3 4
Output: [[1], [2, 3], [4] ]
*/

#include<stdio.h>

void main()
{
    int arr1[10][10];
    int arr2[50][10];
    int sizes[100];
    int M,N;
    int i,j;
    int c1,c2;

    printf("Enter M : ");
    scanf("%d",&M);
    printf("Enter n : ");
    scanf("%d",&N);

    printf("Enter elements \n");
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
            scanf("%d",&arr1[i][j]);

    for(c1=0;c1<M+N-1;c1++)
    {

        c2=0;
        for(i=0;i<M;i++)
        {

            for(j=0;j<N;j++)
            {
                if(i+j==c1)
                {
                        arr2[c1][c2] = arr1[i][j];
                        c2++;
                }
            }
            sizes[c1] = c2;
        }

    }

    printf("[");
    for(i=0;i<c1;i++)
    {
        printf("[");
        for(j=0;j<sizes[i];j++)
        {
            printf("%d,",arr2[i][j]);
        }
        printf("],");
    }
    printf("]");
}

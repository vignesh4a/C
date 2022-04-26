// Write a C program to add two matrices of the same size.

/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>


int main()
{
    int mat1[10][10],mat2[10][10],ans[10][10];
    int n,m;
    int i,j;

    printf("Enter n and m values(n X m) : ");
    scanf("%d%d",&n,&m);

    printf("Enter Matrix 1 Elements\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&mat1[i][j]);
    
    printf("Enter Matrix 2 Elements\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&mat2[i][j]);


    
    printf("Answer >> \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ans[i][j] = mat1[i][j]+mat2[i][j];
            printf("%d ",ans[i][j]);
        }
        printf("\n");
     }       

    return 0;
}
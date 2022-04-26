//Write a C program to print the following pattern

#include<stdio.h>

void main()
{
    int n;
    int i,j;

    printf("Enter N value : ");
    scanf("%d",&n);
    n+=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }



for(i=0;i<n;i++)
    {
        for(j=0;j<=i-1;j++)
        {
            printf(" %d",n-j-1);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            printf(" %d",n-j-1);
        }
        printf("\n");
    }

}
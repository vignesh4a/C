//Write a C program to print the following pattern.
#include<stdio.h>

int star(int max)
{
    if(max<=1)
    {
        printf("%s",(max==0)?"":" *");
        return 0;
    }
    printf(" *");
    star(max-1);
    printf(" *");
    return 0;
}

void space(int max)
{
    if(max == 0)
    {
        printf("  ");
        return;
    }
    printf("  ");
    space(max-1);
}


int print(int max,int m)
{
    if(max<=1)
    {
        space(max);
        star(m-max);
        printf("\n");
        return 0;
    }
    space(max);
    star(m-max);
    printf("\n");
    print(max-1,m);
    space(max);
    star(m-max);
    printf("\n");

    return 0;
}

void main()
{
    unsigned int n;
    
    printf("Enter N value : ");
    scanf("%i",&n);

    print(n,n);
}
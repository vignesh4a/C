#include<stdio.h>
#include<stdlib.h>


void p(char **strarr,int size)
{
    while(size--)
        printf("%s\n",strarr[size]);
}

void main()
{
    char *a[10];
    int i;
    for(i=0;i<5;i++)
    {
        a[i] = (char *)malloc(sizeof(char)*20);
    }
    
    for(i=0;i<5;i++)
    {
        scanf("%s",a[i]);
    }

    p(a,5);

}
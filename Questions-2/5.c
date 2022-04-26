//Write a C program to find the duplicate values of an array of string values.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


unsigned int count(char **chararr,unsigned int size, char *val)     // return repeated numbers
{
    unsigned int temp=0;
    while(size--)
        if(strcmp(chararr[size],val)==0)
            temp++;
    return temp;
}

void p(char **strarr,int size)
{
    int i = size;

    printf("Reapeating Strings are : [ ");
    while(i--)
        if(count(strarr,size,strarr[i])>1)
            printf("%s ",strarr[i]);
        
    printf("]");
}

void main()
{
    
    
    char *a[100];
    int i;
    int size;

    printf("Enter array size : ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        a[i] = (char *)malloc(sizeof(char)*20);
    }
    
    printf("Enter sitrings\n");
    for(i=0;i<size;i++)
    {
        scanf("%s",a[i]);
    }

    p(a,size);
    for(i=0;i<size;i++)
    {
        free(a[i]);
    }
}
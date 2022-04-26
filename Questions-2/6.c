//Write a C program to find the common elements between two arrays (string values).

#include<stdio.h>


int is_equal(char *a, char *b)
{
    int N1=0;
    int N2=0;

    for(N1=0;a[N1];N1++);
    for(N2=0;b[N2];N2++);

    if(N1!=N2)
        return 0;
    
    for(N1=0;N1<N2;N1++)
        if(a[N1]!=b[N1])
            return 0;

    return 1;
}


int is_present(char **arr,char *val,int N1)
{
    int i=0;
    
    for(i=0;i<N1;i++)
        if(is_equal(arr[i],val))
            return 1;
    return 0;
}


void com(char **arr1,int N1,char **arr2,int N2)
{
    int i=0;

    printf("Common Elements are\n");
    
    printf("[ ");
    for(i=0;i<N2;i++)
    {
        if(is_present(arr1,arr2[i],N1))
            printf("%s, ",arr2[i]);
    }
    printf("]");
}



void main()
{
    char *a[5] = {"vignesh","hello","data","next","jpg"};
    char *b[3] = {"hello","s","hello"};

    int N1 = 5;
    int N2 = 3;

    com(a,N1,b,N2);
}
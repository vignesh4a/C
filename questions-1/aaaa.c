#include<stdio.h>

int main()
{
    unsigned long long int i,temp,N,arr[100000];

    scanf("%llu",&N);
     for(i=0;i<N;i++)
        scanf("%llu",&arr[i]);

    temp = 1;

    for(i=1;i<N;i++)
    {
        if(arr[i]-arr[i-1])
            temp++;
    }

    printf("%llu",temp);

    return 0;
}
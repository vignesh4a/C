#include<stdio.h>

unsigned long long int rm(unsigned long long int val,int index)
{
   unsigned long long int x,temp;
   int y;

   x=0;
   temp = val; 
   while(temp)
   {
       x+=(temp%10);
       x*=10;
       temp/=10;
   }
   x/=10;
   temp=x;
   y=0;
   x=0;
   while(temp)
   {
       y+=1;
       if(y!=index)
       {
           x+=(temp%10);
           x*=10;
       }
       temp/=10;
   } 
   x/=10;
   return x;
}

unsigned long long int max(unsigned long long int val,int N,unsigned long long int mod)
{
    int i;
    unsigned long long int max = 0;
    unsigned long long int temp =0;

    for(i=0;i<=N;i++)
    {
        temp = rm(val,i)%mod;
        if(max<temp)
            max = temp;
    }
    return max;
}
void main()
{
    int test,index;
    unsigned long long int value,mod;
    int temp;

    scanf("%d",&test);
    
    while(test)
    {
        test--;
        scanf("%d%llu",&index,&mod);
        scanf("%llu",&value);
        printf("%llu\n",max(value,index,mod));
    }
  

}
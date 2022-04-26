//Write a C program to find the maximum and minimum value of an array.

#include<stdio.h>

int *m_m(int *arr,unsigned int size)
{
    unsigned int i;
    static int m[2];                    // vales will be  [max,min]
     m[0] = arr[0];         
     m[1] = arr[0];

    for(i=1;i<size;i++)
    {
        if(arr[i]>m[0])                // find max
            m[0] = arr[i];
        
        else if(arr[i]<m[1])           // find min
            m[1] = arr[i]; 
    }

    return m;
}

int main()
{
    int arr[100];                       // static size array
    unsigned int i,size;
    int *temp; 

    printf("Enter size of array : ");   // scan size
    scanf("%i",&size);

    printf("Enter array elements\n");   // scan array elemnts
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    temp = m_m(arr,size);               // get max and min values from  function 

    printf("Max = %d\nMin = %d",temp[0],temp[1]); // printing result
    
    return 0;
}
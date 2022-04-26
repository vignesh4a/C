//Write a C program to insert an element (specific position) into an array.

#include<stdio.h>
#include<stdlib.h>


int insert(int *arr,unsigned int *size,unsigned int index,int val)    // funtion return 0 if error occured 
{
    int i;
    if(*size<index)         // check for index out of range
    {
        printf(">>> Out of range <<<\n");
        return 0;
    }

    *size+=1;

    arr = realloc(arr,*size);
    
    if(arr==NULL)          // memory allocation error
        {
            printf("Error\n");
            return 0;
        }


    for(i=*size;i>index;i--)    // shifting array elements after insertion index
       arr[i] = arr[i-1];

    arr[index] = val;           // inserting elements at index location

    return 1;
}


int main()
{
    int *arr;
    unsigned int size,index;
    int element;
    int i=0;

    printf("Enter the size of array : ");   // scan size of array
    scanf("%i",&size);

    printf("Enter Index : ");               // scan index to insert
    scanf("%i",&index);

    printf("Enter Element To Insert: ");             // scan element to insert
    scanf("%d",&element);
    

    arr = (int *)malloc(sizeof(int)*size);  // dynamic array creation
    
    if(arr==NULL)                           // handel null pointer error
    {
        printf("Error");
        return 0;
    }

    printf("Enter elements\n");
    while(i!=size)                          // scanning elements
        scanf("%d",&arr[i++]);


    printf("Before inserting >> [ ");       // printing array elements after inserting
    for(i=0;i<size;i++)     
        printf("%d ",arr[i]);
        printf("]\n");


    if(insert(arr,&size,index,element))     //inserting elements and checkign for error
    {
        printf("After inserting  >> [ ");    // printing array elements after inserting
        for(i=0;i<size;i++)
            printf("%d ",arr[i]);
        printf("]\n");
    }
    

    free(arr);      // free memory to avoid memory leak

    return 0;
}
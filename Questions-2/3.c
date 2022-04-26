//Write a C program to reverse an array of integer values.
#include<stdio.h>
#include<stdlib.h>


int *rev(int *arr,unsigned int size )
{
    int *temp = (int *)malloc(sizeof(int)*size);  // DMA
    unsigned int i;

    for(i=0;i<size;i++)             // revering array
        temp[size-1-i] = arr[i];
    
    return temp;
}

int main()
{
    int *arr,*revarr;
    unsigned int size;
    unsigned int i;

    printf("Enter array size : ");      // scan array size
    scanf("%i",&size);

    arr = (int *)malloc(sizeof(int)*size); // DMA
     
    if(arr == NULL)        // Null ptr handeling
    { 
        printf("Error");
        return 0;
    }

    printf("Enter array Elements\n");  // scan array elements
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    revarr = rev(arr,size);

    
    printf("Original Array : [ "); // print original array
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("]\n");
    
    
    printf("Reversed Array : [ ");  // print reversed array
    for(i=0;i<size;i++)
        printf("%d ",revarr[i]);
    printf("]\n");
    
    free(arr);       // free ptrs to avoid memory leak
    free(revarr);

    return 0;

}
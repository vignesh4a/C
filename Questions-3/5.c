// Write a C program to find common elements from three sorted (in non-decreasing order) arrays


/*
    Name : Vignesh Uday Hegde
    USN : 4CB18EC087
*/

#include<stdio.h>
#include<stdlib.h>

// Assumed No repeating elements in a list

int *common(int *arr1, int size1, int *arr2, int size2, int *arr3, int size3)
{
    int i = (size1<size2)?size1:size2;  // i used as temp var
    int min = (i<size3)?i:size3;
    int j,k;

    int *ptr = (int *)malloc((min+1)*sizeof(int)); // ptr[0] contans size od array
    ptr[0] = 0;
    
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {

            if(arr1[i] == arr2[j])      // check for 3rd array common values
                {
                    for(k=0;k<size3;k++)
                    {
                         if (arr1[i] == arr3[k])
                         {
                             ptr[0]+=1;
                             ptr[ptr[0]] = arr1[i];
                         }
                    }
                   break;
                }
        }
    }

    return ptr;
}

int main()
{
    int arr1[20]; 
    int arr2[20];
    int arr3[20];  
    int N1,N2,N3;
    int i;
    int *ptr;
    
    printf("Array must be in Non-decreasing order\n");
    
    printf("Enter the size of array1 : ");
    scanf("%d",&N1);
    printf("Enter the array1 elements\n");
    for(i=0;i<N1;i++)
        scanf("%d",&arr1[i]);

    printf("Enter the size of array2 : ");
    scanf("%d",&N2);
    printf("Enter the array2 elements\n");
    for(i=0;i<N2;i++)
        scanf("%d",&arr2[i]);

    printf("Enter the size of array3 : ");
    scanf("%d",&N3);
    printf("Enter the array3 elements\n");
    for(i=0;i<N3;i++)
        scanf("%d",&arr3[i]);


    ptr = common(arr1,N1,arr2,N2,arr3,N3);

    for(i=1;i<=ptr[0];i++)
        printf("%d ",ptr[i]);

    free(ptr);

 }
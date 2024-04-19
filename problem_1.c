#include <stdio.h>

// Function to print unique elements in an array
void unique_element(int arr[],int n)
{
    int i,j,c;

    // Loop through each element in the array
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n+1;j++)
        {
            if(i!=j)    // Exclude checking against itself
            {
               if (arr[i]==arr[j])  // If the current element matches any other element, increment the counter
               {
                c++;
               } 
            }
        }
        if(c==0)     // If the current element is not a duplicate, print it
        {
            printf("%d",arr[i]);
        }
        
        printf(" ");
    }
    
}
int main()
{
    int arr[200],n,i;

    // Ask user for the size of array
    printf("Input the number of elements to be stored in the array ");
    scanf("%d",&n);

    printf("\n"),
    // Ask user to input elements in the array
    printf("Enter %d elements in the array:\n ",n);
    for(i=0;i<n;i++)
    {
        printf("Element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

    // print unique elements in the array
    printf("The unique elements found in the array are: ");
    
    unique_element(arr,n);

    return 0;
}
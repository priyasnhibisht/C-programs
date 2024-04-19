#include<stdio.h>

// Function to print the lower triangular matrix elements
void print_lower(int a[][100],int r,int c)
{
    int i,j;
    printf("The elements being summed of the lower traingular matrix are:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        
    }
}

// Function to calculate the sum of the lower triangular matrix elements
void sum_lower(int a[][100],int r, int c)
{
    int i,j;
     
    int lower_sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            lower_sum= lower_sum + a[i][j];
        }
    }
     printf("The Sum of the lower triangular Matrix Elements are: %d",lower_sum);
}

int main ()
{
    int arr[100][100],r,c,lower_sum;
    int i,j;
    // arr to store the elements of matrix, r&c for the rows and columncs of the matrix , i &j as loop counters , lower_sum for storing the sum of lower triangular elements of a matrix
    
    //Ask the user to input the number of rows and columns
    printf("Input the number of rows and columns:");
    scanf("%d %d ",&r,&c);

    // Ask the user to input the matrix
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //Print the inputed matrix
    printf("The given array is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

    // Print the lower triangular matrix elements
    print_lower(arr,r,c);
   
    printf("\n");

    //Calculate the sum of the lower triangular matrix elements
    sum_lower(arr,r,c);

    return 0;
}
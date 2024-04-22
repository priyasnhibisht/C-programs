#include <stdio.h>
int mian()
{
    int arr[100][100],r,c,i,j, max[100];
    
    //Ask the user to input number of rows and columns
    printf("Input the number of rows and columns:");
    scanf("%d %d",&r,&c);

    //Ask the user to input the elements of the array
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");

    //Print the enetered array
    printf("The given array:\n");
    for(i=0,i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",arr[i][j]);
            printf(" ");
        }
        printf("\n")
    }

    //Find the maximum elements of each row
    for(i=0;i<r;i++)
    {
        max[i]= arr[i][0];
        for(j=0;j<c;j++)
        {
            if(arr[i][j]>max[i])
            {
                max[i]= arr[i][j];
            }
        }
    }

    //Print the maximum element of each row
    for(i=0;i<r;i++)
    {
        printf("The maximum element of each row of matrix are:%d",max[i]);
    }

    return 0;

}
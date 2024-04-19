#include <stdio.h>
int main()
{
    int arr[200],a1[100],a2[100],n,i,j,k;
    /*Arrays to store elements, n for the size of array, i ,j,k as loop counters*/

    // Ask user to enter the range of the array
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("\n");

    //Ask user to input elements of the array
    printf("Input %d elements in the array \n",n);
    for(i=0;i<n;i++)
    {
        printf(" Element - %d :",i);
        scanf("%d",&arr[i]);
    }

    j=0,k=0;  // Initialize j and k as 0
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)     // Seperate even elements into a seperate array
        {
            a1[j]=arr[i];
            j++;
        }
        else                   // Seperate odd elements into a seperate array
        {
            a2[k]=arr[i];
            k++;
        }
    }

    //Print the array containing even elements
    printf("The evem elements are:");
    for(i=0;i<j;i++)
    {
        printf("%d",a1[i]);
        printf(" ");
    }

    printf("\n");

    //Print the array containing odd elements
    printf("The odd elements are:");
    for(i=0;i<k;i++)
    {
        printf("%d",a2[i]);
        printf(" ");
    }

    return 0;
}
#include <stdio.h>
void sort(int n, int *p)
{
  int i, j, t;  
    for (i = 0; i < n; i++) 
    {  
        for (j = i + 1; j < n; j++)
        {  
           if (*(ptr + j) < *(p + i)) 
           {  
                t = *(p + i);  
                *(p + i) = *(p + j);  
                *(p + j) = t;  
            }  
        }  
    }  
  for (i = 0; i < n; i++)  
        printf("%d ", *(p + i));  
}  

int main()  
{  
    int n,i;
    printf("Enter size");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements");
    for(i=0;i<n;i++)
   {
       scanf("%d", &a[i]);
   }
    
    sort(n, a);  
  
    return 0;  
}  

#include<stdio.h>
void find(int *p, int n, int *max, int *min) 
{
    *max = *min = *p;
    for (int i = 1; i < n; ++i) {
        if (*(p + i) > *max) {
            *max = *(p+ i);
        } else if (*(p + i) < *min) {
            *min = *(p + i);
        }
    }
}

int main()
{
  int *max,*min,i,n;
  printf("enter the size of array:");
  scanf("%d",&n);
  int a[n];
  
  printf("enter the number:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]); 
  }
  
    find(a,n,&max,&min);
  
   printf(" maximum is %d \n ",max); 
   printf("minimum is %d",min);
  return 0;
}
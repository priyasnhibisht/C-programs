#include<stdio.h>

int main()

{
	int n, m, i, j, *p, *q, a[10], b[10];
	printf("Enter the size of array 1:");
	scanf("%d", &n);
    
    printf("Enter the size of array 2:");
    scanf("%d",&m);
    
	printf("Enter the elements : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("Enter the elements : ");
	for(i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}



	p=a;
	q=b;
	
	for(i = 0, j = n; i < m; i++, j++)
	{
		*(p+j) = *(q+i);
	}
	printf("The merged array is :: ");
	
	for(i = 0; i < j; i++)
	{	printf("%d  ", a[i]);
	}
	
	return 0;

}
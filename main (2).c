#include <stdio.h>

int main() {
    int n,i;
    printf("Enter size of array");
    scanf("%d",&n);
    
  int a[n];
  printf("Enter elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  int k;
  printf("Enter value to search");
  scanf("%d",&k);

  int *ptr = a;

  while (*ptr != k) {
    ptr++;
  }

  if (*ptr == k) {
    printf("Key found at index %d\n", ptr - a);
  } else {
    printf("Key not found\n");
  }

  return 0;
}
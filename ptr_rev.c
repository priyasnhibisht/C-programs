#include <stdio.h>

void rev(int n, int *p)
{
    int i, j, t;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        t = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = t;
    }
}

int main() {
    int n, i, j, t;

    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter %d Elements:", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }

    rev(n, a);

    printf("After reversing the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(a + i)); 
    }

    return 0;
}

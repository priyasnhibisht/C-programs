/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to insert elements in a 2D array and sort this 2D array in ascending order using function.
 */

#include <stdio.h>
void sort(int[],int,int);
void sort(int a[], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j <c-1; j++) {
            for(k=0;k<c-j-1;k++){

            if (a[i][k] > a[i][k + 1]) {
                int t = a[i][k];
                a[i][k] = a[i][k + 1];
                a[i][k + 1] = t;
            }
        }
    }
}
}


int main() {
    int r,c,i,j;
    int a[r][c];

    // Input the number of rows and columns for the 2D array
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    sort(a,r,c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d", &a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

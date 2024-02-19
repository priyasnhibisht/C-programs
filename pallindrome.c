/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to if each element of an array is pallindrome or not and display the count of all palindrome numbers, using function.
 */

#include <stdio.h>
int check(int[] , int);
int palindrome(int);

int main() {
    int n,a[n];

    printf("Enter limit ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Element at %d :",i+1);
        scanf("%d", &a[i]);
    }

    int res = check(a,n);
    printf("%d",res);

    return 0;
}

int check(int b[], int x) {
    int c= 0,i;

    for (int i = 0; i < x; i++) {
        if (palindrome(b[i])) {
            c++;
        }
    }
     return c;
}

int palindrome(int y) {
    int d, rev=0;
    d = y;

    while (y != 0) {
        rev = rev * 10 +y % 10;
        y =y/ 10;
    }
    if(rev==d)
    {
        return 1;
    }
    else{
        return 0;
    }
}
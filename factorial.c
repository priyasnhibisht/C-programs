/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to find factorial of a number using recursion.
 */

#include <stdio.h>
long long fact(int);


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long long f= fact(n);
    printf("%d".f);

    return 0;
}

long long fact(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}
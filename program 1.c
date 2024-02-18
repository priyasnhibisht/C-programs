/* NAME : PRIYANSHI BISHT
SECTION : A
ROLL NO. : 47
 Write a Cprogram to find sum of digits of a numbver using recursion */
 #include <stdio.h>

int sumOfDigits(int x);

int main() 
{
    int n,res;

    printf("Enter a number: ");
    scanf("%d", &n);

    res = sumOfDigits(n);
   
    printf("Sum of digits: %d\n", res);

    return 0;
}

int sumOfDigits(int x)
{
    if (x < 10) {
        return x;
    } 
    else {
        return x % 10 + sumOfDigits(x/ 10);
    }
}
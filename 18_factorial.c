// factorial of a number

#include <stdio.h>

//function prototype
int factorial(int n);

int main(void)
{
    int x;
    printf("Enter a natural number: ");
    scanf("%d", &x);
    printf("Factorial of %d is: %d\n", x, factorial(x));
    return 0;
}

int factorial(int n)
{
    if (n == 1)
        return n;
    return n * factorial(n-1);
}
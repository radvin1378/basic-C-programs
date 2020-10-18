// oututs the sum of n natural numbers

#include <stdio.h>

//function prototype
int sum(int n);

int main(void)
{
    int x;
    printf("Enter a natural number: ");
    scanf("%d", &x);
    printf("%d\n", sum(x));
    return 0;
}

int sum (int n)
{
    if (n == 1)
        return n;
    return n + sum(n-1);
}

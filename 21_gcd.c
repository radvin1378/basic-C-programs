// to find the greatest common divisor of two integers

#include <stdio.h>

int main(void)
{
    int a, b, c, gcd;
    printf("Enter two positive integers:\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }

    for (int i = b; i  > 0; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            gcd = i;
            break;
        }
    }
    printf("GCD: %d\n", gcd);

    return 0;
}
// Quotient and remainder is found out

#include <stdio.h>

int main(void)
{
    int a, b, quo, rem;
    printf ("Enter two integers that you want to divide (Divident, Divisor):\n");
    scanf("%d %d", &a, &b);
    quo = a / b;
    rem = a % b;
    printf("Quotient:: %d\nRemainder: %d\n", quo, rem);
    return 0;
}
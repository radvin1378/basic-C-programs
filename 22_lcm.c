// to find the greatest common divisor of two integers

#include <stdio.h>

int main(void)
{
    int a, b, c, big, lcm;
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

    big = a;

    while (1)
    {
        if ((big % a == 0) && (big % b == 0))
            break;
        big++;
    }

    printf("LCM: %d\n", big);

    return 0;
}
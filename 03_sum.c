//In this example, the user is asked to enter two integers.
//Then, the sum of these two integers is calculated and displayed on the screen.

#include <stdio.h>

int main(void)
{
    int a, b, sum;
    printf ("Enter two integers that you want to be added:\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
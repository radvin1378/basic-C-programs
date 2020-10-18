//counts number of digits in an integer

#include <stdio.h>

int main(void)
{
    int n, i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        i ++;
        n /= 10;
    }

    printf("Digit Count: %d\n", i);

    return 0;
}
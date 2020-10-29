//To find the factors if the given number

#include <stdio.h>
#include <stdlib.h>

int factorial(int x);

int main (void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);    
    factorial(num);
    return 0;
}

int factorial(int x)
{
    int h = x/2;
    for (int i = 1; i < h; i++)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("%d\n", x);
}

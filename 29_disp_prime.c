//Displays the prime numbers in the given interval

#include <stdio.h>
#include <stdbool.h>

bool prime(int x);

int main(void)
{
    int start, stop;
    printf("Enter the interval: ");
    scanf("%d,%d", &start, &stop);
    printf("%d,%d\n", start, stop);

    for(int i = start; i <= stop; i++)
    {
        if (i < 2)
        {
            continue;
        }
        if (prime(i))  
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

bool prime(int x)
{
    int h = x/2;
    for (int i = 2; i <= h; i++)
    {
        if (x%i == 0)
            return false;
    }
}
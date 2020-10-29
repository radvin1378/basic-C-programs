//Displays the armstrong numbers in the given interval

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool armstrng_num(int x);

int main(void)
{
    int start, stop;
    printf("Enter the interval: ");
    scanf("%d,%d", &start, &stop);
    printf("%d,%d\n", start, stop);

    for(int i = start; i <= stop; i++)
    {
        if (armstrng_num(i))  
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

bool armstrng_num(int x)
{
    int sum = 0, nu= x, i = 0;

    while (x != 0)
    {
        i++;
        x /= 10;
    }
    x = nu;
    while (x != 0)
    {   
        sum += pow(x%10, i);
        x /= 10;
    }

    if (sum == nu)
        return true;
    return false;
}
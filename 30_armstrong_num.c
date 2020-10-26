//To find if the number is armstrong number or not
// i.e To check if the sum of its own digits each raised to the power of the number of digits is equal to the number itself.

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool armstrng_num(int x);

int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (armstrng_num(num) == true)
    {
        printf("%d is an armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an armstrong number.\n", num);
    }
    

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
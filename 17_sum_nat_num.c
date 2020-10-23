// prints sum of n natural numbers

#include <stdio.h>
int main(void)
{
    int x, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++)
        sum += i;
    printf("%d\n", sum);
    
    return 0;
}
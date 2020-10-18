// revert the number

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number: ");
    while (n != 0)  
    {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n");

    return 0;
}
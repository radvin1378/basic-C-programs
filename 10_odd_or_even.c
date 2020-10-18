//Check if number is even or odd

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
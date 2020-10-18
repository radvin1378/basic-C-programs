// check if a number is palindrome or not

#include <stdio.h>

int main(void)
{
    int n, r = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)  
    {
        r += n % 10;
        n /= 10;
    }

    printf("%d\n", r);
    if (n == r)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");    

    return 0;
}

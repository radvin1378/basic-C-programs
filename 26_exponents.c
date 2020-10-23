// Find the power of entered number

#include <stdio.h>
int main(void)
{
    int pow, base, ans = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; i++)
        ans *= base; 
    
    printf("%d\n", ans);
    return 0;
}
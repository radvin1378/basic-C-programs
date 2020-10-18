//check whether a number (entered by the user) is negative or positive.


#include <stdio.h>
int main()
{
    long long int num;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num >= 0)
        printf("Positive\n");
    else
        printf("Negative\n");
    
    return 0; 
}
//Entered number is prime or not

#include <stdio.h>
int main(void)
{
    int num, cntr = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    for(int i = 2; i < num/2; i++)
    {
        if (num%i == 0)
        {
            cntr = 1;
            break; 
        }
    }

    if (cntr == 1)
        printf("Composite\n");
    else if (num == 1 || num == 0)
        printf("Neither prime or composite\n");
    else
        printf("Prime\n");

    return 0;
}
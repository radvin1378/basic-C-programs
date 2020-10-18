//find the largest among the input 3 numbers

#include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Enter 3 numbers:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b & a > c)
        printf("Greates number enterd is : %.2f\n", a);
    else if (b > a & b > c)
        printf("Greates number enterd is : %.2f\n", b);
    else
        printf("Greates number enterd is : %.2f\n", c);
    
    return 0;
}
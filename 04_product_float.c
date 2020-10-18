// Multiply two float numbers and print Output

#include <stdio.h>

int main(void)
{
    float a, b, pdct;
    printf("Enter two float numbers:\n");
    scanf("%f %f", &a, &b);
    pdct = a * b;
    printf("Product: %.2f\n", pdct);
    return 0;
}
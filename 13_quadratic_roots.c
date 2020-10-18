//to find the roots of the given quadratic equation

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, r1, r2, discriminant, re, im;
    printf("Enter the coefficients of the equation:\na: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    
    discriminant = pow(b,2) - (4*a*c);

    if (discriminant > 0 )  //roots are real
    {
        r1 = (-b + sqrt(discriminant)) / (2*a);
        r2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots:\nr1: %.2f\nr2: %.2f\n", r1, r2);
    }
    else if (discriminant == 0) //roots are equal
    {
        r1 = -b / (2*a);
        printf("Roots:\nr1 = r2: %.2f\n", r1);
    }
    else    //roots are imaginary
    {
        re = -b/ (2*a);
        printf("%f\n", re);
        im = sqrt(-discriminant) / (2*a);
        printf("Roots:\nr1: %.2f + i%.2f\nr2: %.2f - i%.2f\n", re, im, re, im);
    }   

    return 0;
}

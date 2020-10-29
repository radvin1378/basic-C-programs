// Simple calculator using switch case

#include <stdio.h>

int main(void)
{
    char op;
    double first, second, result;
    printf("Enter the operator (+,-,*,/) : ");
    scanf("%c", &op);
    printf("Enter the First operand: ");
    scanf("%lf", &first);
    printf("Enter the Second operand: ");
    scanf("%lf", &second);

    switch (op)
    {
    case '+':
        result = first + second;
        printf("%.2lf %c %0.2lf = %.2lf\n", first, op, second, result);
        break;
    case '-':
        result = first - second;
        printf("%.2lf %c %0.2lf = %.2lf\n", first, op, second, result);
        break;
    case '*':
        result = first * second;
        printf("%.2lf %c %0.2lf = %.2lf\n", first, op, second, result);
        break;
    case '/':
        result = first / second;
        printf("%.2lf %c %0.2lf = %.2lf\n", first, op, second, result);
        break;
    default:
        printf("Error! Operator incorrect\n");
        break;
    }

    return 0;
}
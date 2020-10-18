//Outputs the ASCII value of the character enetered

#include <stdio.h>

int main(void)
{
    char x;
    printf("Enter a character:\n");
    scanf("%c", &x);
    printf("ASCII value of %c is: %d\n", x, x);
    return 0;
}
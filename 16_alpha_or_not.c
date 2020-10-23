//check wheather alphabet or not

#include <stdio.h>
int main(void)
{
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);
    if ((x >= 'a' && x<= 'z') || (x >= 'A' && x<= 'Z'))
        printf("Alpahabet\n");
    else
        printf("Not an alphabet\n");    
    return 0;
}
//In this example, the integer entered by the user is stored in a variable and printed on the screen.

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter an Integer: \n");
    scanf("%d", &x);    
    printf("The integer you've eneterd is: %d\n", x);
    return 0;
}
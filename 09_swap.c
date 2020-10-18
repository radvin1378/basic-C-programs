//swap value of two variables

#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("After Swaping\n");
    tmp = a;
    a = b;
    b = tmp;
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}
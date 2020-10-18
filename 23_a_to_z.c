// using loop, a toz is printed

#include <stdio.h>

int main (void)
{
    printf("Upper case alphabets:\n");
    for (int i = 65; i < 91; i++)   //ASCII range (65-90)
        printf("%c ", i);
    printf("\n");

    printf("Lower case alphabets:\n");
    for (int i = 97; i < 123; i++)  //ASCII range (97-122)
        printf("%c ", i);
    printf("\n");
    return 0;
}
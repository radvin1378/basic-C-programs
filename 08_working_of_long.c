//working of keyword "long"
#include <stdio.h>
int main(void)
{
    int a;
    long int b;
    long long c;
    long long int d;
    long double e;
    
    printf("Size of int: %ld bytes\n", sizeof(a));
    printf("Size of long int: %ld bytes\n", sizeof(b));
    printf("Size of long long: %ld bytes\n", sizeof(c));
    printf("Size of long long int: %ld bytes\n", sizeof(d));
    printf("Size of long double: %ld bytes\n", sizeof(e));

    return 0;
}
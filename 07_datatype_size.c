// Program to find of datatypes int, float, double, bool, char

#include <stdio.h>

int main(void)
{
    printf("Size of Datatypes (In Bytes):\n");
    printf("int: %ld\nfloat: %ld\ndouble: %ld\nchar: %ld\n",sizeof(int), sizeof(float), sizeof(double), sizeof(char));
    return 0;
}
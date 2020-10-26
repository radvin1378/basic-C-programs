#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool armstrng_num(int x);
int print_array(int array[], int size);

int main(void)
{
    int start, stop, size, cntr = 0;
    printf("Enter the interval: ");
    scanf("%d,%d", &start, &stop);
    printf("%d,%d\n", start, stop);

    size = stop - start;
    int armstrong[size];

    for(int i = start; i <= stop; i++)
    {
        if (armstrng_num(i))
        {
            armstrong[cntr] = i;
            cntr++;
        }
    }   
    print_array(armstrong, cntr);
    return 0;
}

bool armstrng_num(int x)
{
    int sum = 0, nu= x, i = 0;

    while (x != 0)
    {
        i++;
        x /= 10;
    }
    x = nu;
    while (x != 0)
    {   
        sum += pow(x%10, i);
        x /= 10;
    }

    if (sum == nu)
        return true;
    return false;
}

int print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
//Displays the prime numbers in the given interval

#include <stdio.h>
#include <stdbool.h>

bool prime_fn(int x);
int print_array(int array[], int size);

int main(void)
{
    int start, stop, size, cntr = 0;
    bool flag = true;
    printf("Enter the interval: ");
    scanf("%d,%d", &start, &stop);
    printf("%d,%d\n", start, stop);

    size = stop - start;
    int prime[size];

    for(int i = start; i <= stop; i++)
    {
        if (i < 2)
        {
            continue;
        }
        if (prime_fn(i) == true)  
        {
            prime[cntr] = i;
            cntr++;
        }
    }
    print_array(prime, cntr);
    return 0;
}

bool prime_fn(int x)
{
    int h = x/2;
    for (int i = 2; i <= h; i++)
    {
        if (x%i == 0)
            return false;
    }
}

int print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
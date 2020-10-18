//outputs n terms of fibonacci series

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n > 2)
    {
        int seq[n]; //initialised an array
        seq[0] = 0;
        seq[1] = 1;

        for (int i = 2; i < n; i++) //populate array
        {
            seq[i] = seq[i-1] + seq[i-2];
        }
    
        //print array
        printf("Fibonacci Sequence: ");
        for (int i = 0; i < n; i++)
            {
                if (i  == n-1)  //checks if it's the last term
                    printf("%d", seq[i]);
                else
                    printf("%d, ", seq[i]);
            }
    }
    else if(n == 1)
        printf("%d", 0);
    else if(n == 2)
        printf("%d, %d", 0, 1);
    
    printf("\n");

    return 0;
}
#include <stdio.h>


int is_prime(int n)
{
    if (n>1)
    {
        for (int i=2; i<=n; i++)
        {
            if ((n%i)==0) 
            {
                printf ("%d ", i);
                n=n/i;
                break;
            }
        }
        is_prime(n);
    }
    return 0;
}

int main (void) 
{
    int num;
    scanf("%d", &num);
    
    is_prime(num);
    
   
    return 0;
}
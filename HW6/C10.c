#include <stdio.h>

 int mnoj (int n)
{
    int m=1, i;
    
    do
    {
        for(i=2; i<=n; i++)
        {
            if ((n%i)==0) 
            {
                n=n/i;
                break;
            }
        }
        printf ("%d ", i);
    }
    while (n!=1);
    return 0;
}

int main()
{
    int n;
    scanf ("%d", &n);
    mnoj (n);

    return 0;
}
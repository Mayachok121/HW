#include <stdio.h>

int pechat (int n)
{    
    printf ("%d ", n%10);
    n/=10;
    if (n>0) pechat (n);
    return 0;
    
}




int main()
{
    int p;
    scanf ("%d", &p);
    pechat (p);

    return 0;
}
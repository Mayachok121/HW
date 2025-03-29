#include <stdio.h>

int pechat (int n, int i)
{    
    printf ("%d ", i);
    if (i<=n-1) pechat (n, i+1);
    return 0;
    
}




int main()
{
    int p, i=1;
    scanf ("%d", &p);
    pechat (p, i);

    return 0;
}
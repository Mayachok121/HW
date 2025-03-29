#include <stdio.h>

int sum (int n, int s)
{    
    
    if (n>0) sum (n-1, s+n);
    else return s;
    
}




int main()
{
    int p, m=0;
    scanf ("%d", &p);
    printf ("%d", sum (p, m));

    return 0;
}
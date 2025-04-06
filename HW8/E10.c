#include <stdio.h>

int main (void)
{
    int a[12], b[12];
    
    for (int i=0; i<=11; i++)
    {
        scanf ("%d", &a[i]);
        if (i<=7) b[i+4]=a[i];
        else b[i-8]=a[i];
    }
    
    for (int i=0; i<=11; i++)
    {
        printf ("%d ", b[i]);
    }
    
    return 0;

}
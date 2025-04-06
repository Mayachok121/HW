#include <stdio.h>

int main (void)
{
    int a[10], b[10];
    
    for (int i=0; i<=9; i++)
    {
        scanf ("%d", &a[i]);
        if (i!=9) b[i+1]=a[i];
        else b[0]=a[i];
    }
    
    for (int i=0; i<=9; i++)
    {
        printf ("%d ", b[i]);
    }
    
    return 0;

}
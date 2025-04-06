#include <stdio.h>

int main (void)
{
    int a[10], b[10];
    float sum=0;
    for (int i=0; i<=9; i++)
    {
        scanf ("%d", &a[i]);
        if (i<5) b[4-i]=a[i];
        else b[14-i]=a[i];
    }
    
    for (int i=0; i<=9; i++)
    {
        printf ("%d ", b[i]);
    }
    
    return 0;

}